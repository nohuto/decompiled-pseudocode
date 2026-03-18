/*
 * XREFs of MiWritePteHighLevelIsr @ 0x1404B8330
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddress @ 0x1404FA2B8 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404FA680 (KeCanUseHaltOnAddress.c)
 *     MiStackCopyHighLevel @ 0x140675304 (MiStackCopyHighLevel.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

ULONG_PTR __fastcall MiWritePteHighLevelIsr(volatile signed __int64 **Argument)
{
  volatile signed __int64 *v2; // r12
  volatile signed __int64 *v3; // r15
  unsigned __int64 v4; // rbx
  volatile signed __int64 v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _OWORD *v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  volatile signed __int64 *v16; // rax
  __int64 CurrentIrql; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  signed __int32 v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdx
  ULONG_PTR v24; // r12
  signed __int32 v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // r14d
  char v28; // r15
  __int64 v29; // rcx
  signed __int32 v30; // ecx
  signed __int32 v31; // edx
  volatile signed __int32 v32; // r8d
  int v33; // edi
  unsigned int v34; // edi
  char v35; // r15
  unsigned __int32 v36; // ecx
  volatile signed __int32 v37; // r8d
  int v38; // ebx
  signed __int32 v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // r14d
  char v42; // r15
  signed __int32 v43; // ecx
  signed __int32 v44; // edx
  volatile signed __int32 v45; // r8d
  int v46; // edi
  __int64 v47; // rdx
  signed __int32 v48; // eax
  unsigned int v49; // ebx
  signed __int32 v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // edi
  char v53; // r15
  __int64 v54; // rcx
  signed __int32 v55; // ecx
  signed __int32 v56; // edx
  volatile signed __int32 v57; // r8d
  int v58; // r14d
  unsigned int v59; // r14d
  char v60; // r15
  __int64 v61; // rcx
  unsigned __int32 v62; // ecx
  volatile signed __int32 v63; // r8d
  int v64; // edi
  signed __int32 v65; // eax
  unsigned int v66; // edi
  char v67; // r15
  __int64 v68; // rcx
  signed __int32 v69; // ecx
  signed __int32 v70; // edx
  volatile signed __int32 v71; // r8d
  int v72; // r14d
  __int64 v73; // rdx
  unsigned __int8 v74; // bl
  ULONG_PTR result; // rax
  __int32 v76; // [rsp+28h] [rbp-E0h] BYREF
  __int32 v77; // [rsp+2Ch] [rbp-DCh] BYREF
  __int32 v78; // [rsp+30h] [rbp-D8h] BYREF
  __int32 v79; // [rsp+34h] [rbp-D4h] BYREF
  int v80; // [rsp+38h] [rbp-D0h] BYREF
  int v81; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG_PTR v82; // [rsp+40h] [rbp-C8h]
  __int64 v83; // [rsp+48h] [rbp-C0h]
  __int128 v84; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v85; // [rsp+68h] [rbp-A0h]
  __int128 v86; // [rsp+78h] [rbp-90h]
  __int128 v87; // [rsp+88h] [rbp-80h]
  __int128 v88; // [rsp+98h] [rbp-70h]
  __int128 v89; // [rsp+A8h] [rbp-60h]
  __int128 v90; // [rsp+B8h] [rbp-50h]
  __int128 v91; // [rsp+C8h] [rbp-40h]
  _OWORD v92[4]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int64 *v93; // [rsp+118h] [rbp+10h]

  v82 = (ULONG_PTR)Argument;
  memset_0(&v84, 0, 0xC8uLL);
  v2 = *Argument;
  v3 = Argument[29];
  v4 = (unsigned __int64)Argument[1];
  v5 = **Argument;
  v6 = *((_OWORD *)Argument + 3);
  v84 = *((_OWORD *)Argument + 2);
  v7 = *((_OWORD *)Argument + 4);
  v85 = v6;
  v8 = *((_OWORD *)Argument + 5);
  v86 = v7;
  v9 = *((_OWORD *)Argument + 6);
  v87 = v8;
  v10 = *((_OWORD *)Argument + 7);
  v88 = v9;
  v11 = *((_OWORD *)Argument + 8);
  v89 = v10;
  v90 = v11;
  v12 = v92;
  v91 = *((_OWORD *)Argument + 9);
  v13 = *((_OWORD *)Argument + 11);
  v92[0] = *((_OWORD *)Argument + 10);
  v14 = *((_OWORD *)Argument + 12);
  v92[1] = v13;
  v15 = *((_OWORD *)Argument + 13);
  v16 = Argument[28];
  v92[2] = v14;
  v92[3] = v15;
  v93 = v16;
  CurrentIrql = KeGetCurrentIrql();
  v83 = CurrentIrql;
  v18 = 15LL;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v12, 15LL);
  }
  v19 = (unsigned __int64)Argument + 20;
  v20 = _InterlockedDecrement((volatile signed __int32 *)v19);
  v21 = ~v20 & 0x80000000;
  if ( (v20 & 0x3FFFFFFF) != 0 )
  {
    v34 = 0;
    v35 = 0;
    while ( (*(_DWORD *)v19 & 0x80000000) != v21 )
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v35;
        if ( (unsigned __int8)((__int64 (*)(void))KeCanUseHaltOnAddress)()
          && (KiVelocityFlags & 0x20000) != 0
          && (v35 & 7) == 0 )
        {
          v36 = *(_DWORD *)v19;
          if ( (*(_DWORD *)v19 & 0x80000000) != v21 )
          {
            LODWORD(v18) = *(_DWORD *)v19;
            v37 = *(_DWORD *)v19;
            do
            {
              v38 = v36 | 0x40000000;
              v36 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v36 | 0x40000000, v18);
              if ( v36 == v37 )
              {
                v77 = v38;
                do
                {
                  KiHaltOnAddress(v19, &v77, 4LL);
                  v36 = *(_DWORD *)v19;
                }
                while ( *(_DWORD *)v19 == v38 );
              }
              v18 = v36;
              v37 = v36;
            }
            while ( (v36 & 0x80000000) != v21 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v34);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v39 = _InterlockedDecrement((volatile signed __int32 *)v19);
    v40 = ~v39 & 0x80000000;
    if ( (v39 & 0x3FFFFFFF) != 0 )
    {
      v41 = 0;
      v42 = 0;
      while ( (*(_DWORD *)v19 & 0x80000000) != v40 )
      {
        if ( (++v41 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v42;
          if ( (unsigned __int8)((__int64 (*)(void))KeCanUseHaltOnAddress)()
            && (KiVelocityFlags & 0x20000) != 0
            && (v42 & 7) == 0 )
          {
            v43 = *(_DWORD *)v19;
            if ( (*(_DWORD *)v19 & 0x80000000) != v40 )
            {
              v44 = *(_DWORD *)v19;
              v45 = *(_DWORD *)v19;
              do
              {
                v46 = v43 | 0x40000000;
                v43 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v43 | 0x40000000, v44);
                if ( v43 == v45 )
                {
                  v78 = v46;
                  do
                  {
                    KiHaltOnAddress(v19, &v78, 4LL);
                    v43 = *(_DWORD *)v19;
                  }
                  while ( *(_DWORD *)v19 == v46 );
                }
                v44 = v43;
                v45 = v43;
              }
              while ( (v43 & 0x80000000) != v40 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v41);
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
      v78 = _InterlockedExchange((volatile __int32 *)v19, *(_DWORD *)(v19 + 4) | v40);
      if ( (v78 & 0x40000000) != 0 )
        KeWakeAddressAll(v19, v18);
    }
    v24 = v82;
  }
  else
  {
    v77 = _InterlockedExchange((volatile __int32 *)v19, *(_DWORD *)(v19 + 4) | v21);
    if ( (v77 & 0x40000000) != 0 )
      KeWakeAddressAll(v19, v18);
    if ( v3 )
      MiStackCopyHighLevel(v3);
    v22 = v4 | 0x20;
    if ( (((v4 | 0x20) ^ v5) & 0xFFFFFFFFFF000LL) != 0 )
      MiWriteValidPteNewPage(v2, v22, 0);
    else
      MiWriteValidPteNewProtection((ULONG_PTR)v2, v22);
    v24 = v82;
    *(_DWORD *)(v82 + 16) = DWORD1(v85);
    v25 = _InterlockedDecrement((volatile signed __int32 *)v19);
    v26 = ~v25 & 0x80000000;
    if ( (v25 & 0x3FFFFFFF) != 0 )
    {
      v27 = 0;
      v28 = 0;
      while ( (*(_DWORD *)v19 & 0x80000000) != v26 )
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v28;
          if ( (unsigned __int8)KeCanUseHaltOnAddress(v29) && (KiVelocityFlags & 0x20000) != 0 && (v28 & 7) == 0 )
          {
            v30 = *(_DWORD *)v19;
            if ( (*(_DWORD *)v19 & 0x80000000) != v26 )
            {
              v31 = *(_DWORD *)v19;
              v32 = *(_DWORD *)v19;
              do
              {
                v33 = v30 | 0x40000000;
                v30 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v30 | 0x40000000, v31);
                if ( v30 == v32 )
                {
                  v76 = v33;
                  do
                  {
                    KiHaltOnAddress(v19, &v76, 4LL);
                    v30 = *(_DWORD *)v19;
                  }
                  while ( *(_DWORD *)v19 == v33 );
                }
                v31 = v30;
                v32 = v30;
              }
              while ( (v30 & 0x80000000) != v26 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v27);
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
      v76 = _InterlockedExchange((volatile __int32 *)v19, *(_DWORD *)(v19 + 4) | v26);
      if ( (v76 & 0x40000000) != 0 )
        KeWakeAddressAll(v19, v23);
    }
  }
  DWORD1(v85) = *(_DWORD *)(v24 + 16);
  MiFlushTbList((__int64)&v84);
  v48 = _InterlockedDecrement((volatile signed __int32 *)v19);
  v49 = ~v48 & 0x80000000;
  if ( (v48 & 0x3FFFFFFF) != 0 )
  {
    v59 = 0;
    v60 = 0;
    while ( (*(_DWORD *)v19 & 0x80000000) != v49 )
    {
      if ( (++v59 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v60;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v61) && (KiVelocityFlags & 0x20000) != 0 && (v60 & 7) == 0 )
        {
          v62 = *(_DWORD *)v19;
          if ( (*(_DWORD *)v19 & 0x80000000) != v49 )
          {
            LODWORD(v47) = *(_DWORD *)v19;
            v63 = *(_DWORD *)v19;
            do
            {
              v64 = v62 | 0x40000000;
              v62 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v62 | 0x40000000, v47);
              if ( v62 == v63 )
              {
                v79 = v64;
                do
                {
                  KiHaltOnAddress(v19, &v79, 4LL);
                  v62 = *(_DWORD *)v19;
                }
                while ( *(_DWORD *)v19 == v64 );
              }
              v47 = v62;
              v63 = v62;
            }
            while ( (v62 & 0x80000000) != v49 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v59);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v65 = _InterlockedDecrement((volatile signed __int32 *)v19);
    v51 = ~v65 & 0x80000000;
    if ( (v65 & 0x3FFFFFFF) == 0 )
      goto LABEL_74;
    v66 = 0;
    v67 = 0;
    while ( (*(_DWORD *)v19 & 0x80000000) != v51 )
    {
      if ( (++v66 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v67;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v68) && (KiVelocityFlags & 0x20000) != 0 && (v67 & 7) == 0 )
        {
          v69 = *(_DWORD *)v19;
          if ( (*(_DWORD *)v19 & 0x80000000) != v51 )
          {
            v70 = *(_DWORD *)v19;
            v71 = *(_DWORD *)v19;
            do
            {
              v72 = v69 | 0x40000000;
              v69 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v69 | 0x40000000, v70);
              if ( v69 == v71 )
              {
                v81 = v72;
                do
                {
                  KiHaltOnAddress(v19, &v81, 4LL);
                  v69 = *(_DWORD *)v19;
                }
                while ( *(_DWORD *)v19 == v72 );
              }
              v70 = v69;
              v71 = v69;
            }
            while ( (v69 & 0x80000000) != v51 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v66);
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
    v79 = _InterlockedExchange((volatile __int32 *)v19, *(_DWORD *)(v19 + 4) | v49);
    if ( (v79 & 0x40000000) != 0 )
      KeWakeAddressAll(v19, v47);
    v50 = _InterlockedDecrement((volatile signed __int32 *)v19);
    v51 = ~v50 & 0x80000000;
    if ( (v50 & 0x3FFFFFFF) == 0 )
    {
LABEL_74:
      if ( (_InterlockedExchange((volatile __int32 *)v19, *(_DWORD *)(v19 + 4) | v51) & 0x40000000) != 0 )
        KeWakeAddressAll(v19, v47);
      goto LABEL_129;
    }
    v52 = 0;
    v53 = 0;
    while ( (*(_DWORD *)v19 & 0x80000000) != v51 )
    {
      if ( (++v52 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v53;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v54) && (KiVelocityFlags & 0x20000) != 0 && (v53 & 7) == 0 )
        {
          v55 = *(_DWORD *)v19;
          if ( (*(_DWORD *)v19 & 0x80000000) != v51 )
          {
            v56 = *(_DWORD *)v19;
            v57 = *(_DWORD *)v19;
            do
            {
              v58 = v55 | 0x40000000;
              v55 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v55 | 0x40000000, v56);
              if ( v55 == v57 )
              {
                v80 = v58;
                do
                {
                  KiHaltOnAddress(v19, &v80, 4LL);
                  v55 = *(_DWORD *)v19;
                }
                while ( *(_DWORD *)v19 == v58 );
              }
              v56 = v55;
              v57 = v55;
            }
            while ( (v55 & 0x80000000) != v51 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v52);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
LABEL_129:
  DWORD1(v85) = *(_DWORD *)(v24 + 52) & 0xFFFFFEBD | 0x100;
  MiFlushTbList((__int64)&v84);
  v74 = v83;
  if ( KiIrqlFlags )
  {
    LOBYTE(v73) = v83;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v73);
  }
  result = v74;
  __writecr8(v74);
  return result;
}
