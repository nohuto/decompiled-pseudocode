/*
 * XREFs of MiDpcGangTarget @ 0x140692720
 * Callers:
 *     <none>
 * Callees:
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     MiGetGangAssignment @ 0x1404F48F0 (MiGetGangAssignment.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

__int64 __fastcall MiDpcGangTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  int GangAssignment; // r12d
  volatile signed __int32 *v6; // r13
  __int64 v7; // rdi
  int v8; // r10d
  int v9; // eax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // r15d
  char v15; // r13
  unsigned __int32 v16; // ecx
  unsigned int v17; // eax
  unsigned __int32 v18; // r8d
  int v19; // r14d
  __int64 result; // rax
  unsigned int v21; // edi
  unsigned int v22; // esi
  char v23; // r15
  signed __int32 v24; // ecx
  unsigned int v25; // eax
  signed __int32 v26; // edx
  signed __int32 v27; // r8d
  int v28; // r14d
  __int32 v29; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR *v30; // [rsp+28h] [rbp-8h] BYREF
  __int32 v31; // [rsp+78h] [rbp+48h] BYREF
  volatile signed __int32 *v32; // [rsp+80h] [rbp+50h]

  v32 = a3;
  GangAssignment = 0;
  v30 = 0LL;
  v6 = a3;
  v7 = a2;
  v8 = 1;
  v9 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( *(_BYTE *)(a2 + 212) || v9 == *(_DWORD *)(a2 + 192) )
  {
    if ( *(_DWORD *)(a2 + 188) == 1 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 208), 1, 0) )
LABEL_11:
        GangAssignment = MiGetGangAssignment(v7, &v30);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = *(_QWORD *)(a2 + 224);
      a2 = 0LL;
      while ( (unsigned int)a2 < *(unsigned __int16 *)(v7 + 214) )
      {
        if ( CurrentPrcb->Group == *(_WORD *)(v11 + 8) )
        {
          if ( (CurrentPrcb->GroupSetMember & *(_QWORD *)v11) == 0 )
            break;
          goto LABEL_11;
        }
        a2 = (unsigned int)(a2 + 1);
        v11 += 16LL;
      }
    }
  }
  if ( (*(_DWORD *)(v7 + 184) & 2) != 0 )
  {
    v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v13 = ~v12 & 0x80000000;
    if ( (v12 & 0x3FFFFFFF) != 0 )
    {
      v14 = 0;
      v15 = 0;
      if ( (*(_DWORD *)a4 & 0x80000000) != v13 )
      {
        while ( 1 )
        {
          v14 += v8;
          if ( (v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            ++v15;
            if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v15 & 7) == 0 )
            {
              v16 = *(_DWORD *)a4;
              v17 = *(_DWORD *)a4 & 0x80000000;
              v31 = *(_DWORD *)a4;
              if ( v17 != v13 )
              {
                LODWORD(a2) = v16;
                v18 = v16;
                do
                {
                  v19 = v16 | 0x40000000;
                  v16 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v16 | 0x40000000, a2);
                  if ( v16 == v18 )
                  {
                    v31 = v19;
                    do
                    {
                      KiHaltOnAddress((_BYTE *)a4, &v31, 4LL);
                      v16 = *(_DWORD *)a4;
                    }
                    while ( *(_DWORD *)a4 == v19 );
                  }
                  v31 = v16;
                  a2 = v16;
                  v18 = v16;
                }
                while ( (v16 & 0x80000000) != v13 );
              }
            }
            else
            {
              HvlNotifyLongSpinWait(v14);
            }
          }
          else
          {
            _mm_pause();
          }
          if ( (*(_DWORD *)a4 & 0x80000000) == v13 )
            break;
          v8 = 1;
        }
      }
      v6 = v32;
    }
    else
    {
      v31 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v13);
      if ( (v31 & 0x40000000) != 0 )
        KeWakeAddressAll(a4, a2);
    }
  }
  if ( GangAssignment )
    MiDoGangAssignment((__int64 *)v7, &v30);
  result = *(unsigned int *)(v7 + 184);
  if ( (result & 2) != 0 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
    v21 = ~(_DWORD)result & 0x80000000;
    if ( (result & 0x3FFFFFFF) != 0 )
    {
      v22 = 0;
      v23 = 0;
      while ( 1 )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v21 )
          break;
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v23;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v23 & 7) == 0 )
          {
            v24 = *(_DWORD *)a4;
            v25 = *(_DWORD *)a4 & 0x80000000;
            v29 = *(_DWORD *)a4;
            if ( v25 != v21 )
            {
              v26 = v24;
              v27 = v24;
              do
              {
                v28 = v24 | 0x40000000;
                v24 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v24 | 0x40000000, v26);
                if ( v24 == v27 )
                {
                  v29 = v28;
                  do
                  {
                    KiHaltOnAddress((_BYTE *)a4, &v29, 4LL);
                    v24 = *(_DWORD *)a4;
                  }
                  while ( *(_DWORD *)a4 == v28 );
                }
                v29 = v24;
                v26 = v24;
                v27 = v24;
              }
              while ( (v24 & 0x80000000) != v21 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v22);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      v29 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v21);
      if ( (v29 & 0x40000000) != 0 )
        result = KeWakeAddressAll(a4, a2);
    }
  }
  _InterlockedDecrement(v6);
  return result;
}
