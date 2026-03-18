/*
 * XREFs of ACPIGetWorkerForInteger @ 0x140034B40
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIInternalUpdateDeviceStatus @ 0x140034EC4 (ACPIInternalUpdateDeviceStatus.c)
 *     ACPIGetProcessorStatus @ 0x140034FAC (ACPIGetProcessorStatus.c)
 *     ACPIGetConvertToClassCode @ 0x140060AC8 (ACPIGetConvertToClassCode.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIGetWorkerForInteger(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // r14d
  _DWORD *v10; // r13
  unsigned int v11; // edi
  ULONG_PTR v12; // r15
  __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v17; // al
  _QWORD **v18; // r9
  void **v19; // r8
  _DWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  int v24; // eax
  __int64 *v25; // rax
  int v27; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)a4[7];
  v28 = (unsigned int)a2 >> 31;
  v7 = a2;
  v8 = a1;
  if ( !v4 )
  {
    v7 = -1073741670;
    goto LABEL_21;
  }
  v9 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v20 = (_DWORD *)a4[8];
    if ( (v9 & 0x4000000) != 0 || (v22 = a4[3], !_bittest64((const signed __int64 *)(v22 + 8), 0x3Du)) )
    {
      if ( v7 < 0 )
        goto LABEL_21;
      if ( *(_WORD *)(a3 + 2) != 1 )
      {
LABEL_56:
        v7 = -1072431089;
        goto LABEL_21;
      }
      v21 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v21 = *(_QWORD *)(v22 + 608);
    }
    *v4 = v21;
    if ( v20 )
      *v20 = 8;
    goto LABEL_20;
  }
  if ( (v9 & 0x800) != 0 )
  {
    v10 = (_DWORD *)a4[8];
    v11 = 15;
    v12 = a4[3];
    v27 = 15;
    if ( (v9 & 0x4000000) != 0 )
    {
      if ( (_DWORD)a2 != -1073741772 )
      {
        if ( (int)a2 >= 0 )
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
            KeBugCheckEx(0xA5u, 8uLL, v12, 0LL, *(unsigned __int16 *)(a3 + 2));
          v11 = *(_DWORD *)(a3 + 16);
        }
        else
        {
          v11 = 0;
        }
      }
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( (v13 & 0x200000000000000LL) != 0 )
        v14 = (v13 & 0x400000000LL) != 0;
      else
        v14 = (v13 & 0x8000000000000LL) != 0;
      if ( !v14 )
      {
        if ( (v13 & 0x1000000000LL) != 0 )
        {
          v24 = ACPIGetProcessorStatus(v12, a2, &v27, 0LL);
          v11 = v27;
          if ( v24 < 0 )
            v11 = 0;
        }
        if ( v7 != -1073741772 )
        {
          if ( v7 < 0 )
          {
            v11 = 0;
          }
          else
          {
            if ( *(_WORD *)(a3 + 2) != 1 )
            {
              v25 = AMLIGetNamedChild(*(__int64 **)(v12 + 760), 1096045407);
              KeBugCheckEx(0xA5u, 8uLL, v12, (ULONG_PTR)v25, *(unsigned __int16 *)(a3 + 2));
            }
            v11 = *(_DWORD *)(a3 + 16);
          }
        }
      }
      v15 = *(_QWORD *)(v12 + 8);
      if ( (v15 & 1) != 0 && (v9 & 0x1000) == 0 )
        v11 &= ~1u;
      if ( (v15 & 0x40000000) != 0 )
        v11 &= ~4u;
      if ( (v15 & 0x80000000000LL) != 0 )
        v11 &= ~1u;
      ACPIInternalUpdateDeviceStatus(v12, v11, 4294967294LL, 0LL);
    }
    *(_DWORD *)v4 = v11;
    if ( v10 )
      *v10 = 4;
    v8 = a1;
LABEL_20:
    v7 = 0;
    goto LABEL_21;
  }
  if ( (v9 & 0x8000) == 0 )
  {
    if ( (int)a2 < 0 )
      goto LABEL_21;
    if ( (v9 & 0x4000) == 0 || *(_WORD *)(a3 + 2) == 1 )
    {
      *(_DWORD *)v4 = *(_DWORD *)(a3 + 16);
      v23 = (_DWORD *)a4[8];
      if ( v23 )
        *v23 = 4;
      goto LABEL_20;
    }
    goto LABEL_56;
  }
  v7 = ACPIGetConvertToClassCode(a1, a2, a3, 0, (__int64)v4, a4[8]);
LABEL_21:
  *((_DWORD *)a4 + 18) = v7;
  if ( !(_BYTE)v28 )
  {
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v16 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v16 )
      v16(v8, (unsigned int)v7, 0LL, a4[6]);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    v18 = (_QWORD **)a4[1];
    if ( v18[1] != a4 + 1 || (v19 = (void **)a4[2], *v19 != a4 + 1) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = v19;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v17);
    ExFreePoolWithTag(a4, 0);
  }
}
