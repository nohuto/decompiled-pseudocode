/*
 * XREFs of MiWritePteHighLevelIsr @ 0x1404B2C80
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     MiStackCopyHighLevel @ 0x1406764D4 (MiStackCopyHighLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG_PTR __fastcall MiWritePteHighLevelIsr(volatile signed __int64 **Argument)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile signed __int64 *v4; // r12
  volatile signed __int64 *v5; // r15
  unsigned __int64 v6; // rbx
  volatile signed __int64 v7; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  volatile signed __int64 *v18; // rax
  __int64 CurrentIrql; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  signed __int32 v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rdx
  ULONG_PTR v26; // r12
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // r14d
  char v30; // r15
  __int64 v31; // rcx
  signed __int32 v32; // ecx
  signed __int32 v33; // edx
  volatile signed __int32 v34; // r8d
  int v35; // edi
  unsigned int v36; // edi
  char v37; // r15
  unsigned __int32 v38; // ecx
  volatile signed __int32 v39; // r8d
  int v40; // ebx
  signed __int32 v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // r14d
  char v44; // r15
  signed __int32 v45; // ecx
  signed __int32 v46; // edx
  volatile signed __int32 v47; // r8d
  int v48; // edi
  __int64 v49; // rdx
  signed __int32 v50; // eax
  unsigned int v51; // ebx
  signed __int32 v52; // eax
  unsigned int v53; // ebx
  unsigned int v54; // edi
  char v55; // r15
  __int64 v56; // rcx
  signed __int32 v57; // ecx
  signed __int32 v58; // edx
  volatile signed __int32 v59; // r8d
  int v60; // r14d
  unsigned int v61; // r14d
  char v62; // r15
  __int64 v63; // rcx
  unsigned __int32 v64; // ecx
  volatile signed __int32 v65; // r8d
  int v66; // edi
  signed __int32 v67; // eax
  unsigned int v68; // edi
  char v69; // r15
  __int64 v70; // rcx
  signed __int32 v71; // ecx
  signed __int32 v72; // edx
  volatile signed __int32 v73; // r8d
  int v74; // r14d
  __int64 v75; // rdx
  unsigned __int8 v76; // bl
  ULONG_PTR result; // rax
  __int32 v78; // [rsp+28h] [rbp-E0h] BYREF
  __int32 v79; // [rsp+2Ch] [rbp-DCh] BYREF
  __int32 v80; // [rsp+30h] [rbp-D8h] BYREF
  __int32 v81; // [rsp+34h] [rbp-D4h] BYREF
  int v82; // [rsp+38h] [rbp-D0h] BYREF
  int v83; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG_PTR v84; // [rsp+40h] [rbp-C8h]
  __int64 v85; // [rsp+48h] [rbp-C0h]
  __int128 v86; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v87; // [rsp+68h] [rbp-A0h]
  __int128 v88; // [rsp+78h] [rbp-90h]
  __int128 v89; // [rsp+88h] [rbp-80h]
  __int128 v90; // [rsp+98h] [rbp-70h]
  __int128 v91; // [rsp+A8h] [rbp-60h]
  __int128 v92; // [rsp+B8h] [rbp-50h]
  __int128 v93; // [rsp+C8h] [rbp-40h]
  _OWORD v94[4]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int64 *v95; // [rsp+118h] [rbp+10h]

  v84 = (ULONG_PTR)Argument;
  memset_0(&v86, 0, 0xC8uLL);
  v4 = *Argument;
  v5 = Argument[29];
  v6 = (unsigned __int64)Argument[1];
  v7 = **Argument;
  v8 = *((_OWORD *)Argument + 3);
  v86 = *((_OWORD *)Argument + 2);
  v9 = *((_OWORD *)Argument + 4);
  v87 = v8;
  v10 = *((_OWORD *)Argument + 5);
  v88 = v9;
  v11 = *((_OWORD *)Argument + 6);
  v89 = v10;
  v12 = *((_OWORD *)Argument + 7);
  v90 = v11;
  v13 = *((_OWORD *)Argument + 8);
  v91 = v12;
  v92 = v13;
  v14 = v94;
  v93 = *((_OWORD *)Argument + 9);
  v15 = *((_OWORD *)Argument + 11);
  v94[0] = *((_OWORD *)Argument + 10);
  v16 = *((_OWORD *)Argument + 12);
  v94[1] = v15;
  v17 = *((_OWORD *)Argument + 13);
  v18 = Argument[28];
  v94[2] = v16;
  v94[3] = v17;
  v95 = v18;
  CurrentIrql = KeGetCurrentIrql();
  v85 = CurrentIrql;
  v20 = 15LL;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v14, 15LL);
  }
  v21 = (unsigned __int64)Argument + 20;
  v22 = _InterlockedDecrement((volatile signed __int32 *)v21);
  v23 = ~v22 & 0x80000000;
  if ( (v22 & 0x3FFFFFFF) != 0 )
  {
    v36 = 0;
    v37 = 0;
    while ( (*(_DWORD *)v21 & 0x80000000) != v23 )
    {
      if ( (++v36 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v37;
        if ( (unsigned __int8)((__int64 (*)(void))KeCanUseHaltOnAddress)()
          && (KiVelocityFlags & 0x20000) != 0
          && (v37 & 7) == 0 )
        {
          v38 = *(_DWORD *)v21;
          if ( (*(_DWORD *)v21 & 0x80000000) != v23 )
          {
            LODWORD(v20) = *(_DWORD *)v21;
            v39 = *(_DWORD *)v21;
            do
            {
              v40 = v38 | 0x40000000;
              v38 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v38 | 0x40000000, v20);
              if ( v38 == v39 )
              {
                v79 = v40;
                do
                {
                  KiHaltOnAddress(v21, &v79, 4LL);
                  v38 = *(_DWORD *)v21;
                }
                while ( *(_DWORD *)v21 == v40 );
              }
              v20 = v38;
              v39 = v38;
            }
            while ( (v38 & 0x80000000) != v23 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v36);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v41 = _InterlockedDecrement((volatile signed __int32 *)v21);
    v42 = ~v41 & 0x80000000;
    if ( (v41 & 0x3FFFFFFF) != 0 )
    {
      v43 = 0;
      v44 = 0;
      while ( (*(_DWORD *)v21 & 0x80000000) != v42 )
      {
        if ( (++v43 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v44;
          if ( (unsigned __int8)((__int64 (*)(void))KeCanUseHaltOnAddress)()
            && (KiVelocityFlags & 0x20000) != 0
            && (v44 & 7) == 0 )
          {
            v45 = *(_DWORD *)v21;
            if ( (*(_DWORD *)v21 & 0x80000000) != v42 )
            {
              v46 = *(_DWORD *)v21;
              v47 = *(_DWORD *)v21;
              do
              {
                v48 = v45 | 0x40000000;
                v45 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v45 | 0x40000000, v46);
                if ( v45 == v47 )
                {
                  v80 = v48;
                  do
                  {
                    KiHaltOnAddress(v21, &v80, 4LL);
                    v45 = *(_DWORD *)v21;
                  }
                  while ( *(_DWORD *)v21 == v48 );
                }
                v46 = v45;
                v47 = v45;
              }
              while ( (v45 & 0x80000000) != v42 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v43);
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
      v80 = _InterlockedExchange((volatile __int32 *)v21, *(_DWORD *)(v21 + 4) | v42);
      if ( (v80 & 0x40000000) != 0 )
        KeWakeAddressAll(v21, v20);
    }
    v26 = v84;
  }
  else
  {
    v79 = _InterlockedExchange((volatile __int32 *)v21, *(_DWORD *)(v21 + 4) | v23);
    if ( (v79 & 0x40000000) != 0 )
      KeWakeAddressAll(v21, v20);
    if ( v5 )
      MiStackCopyHighLevel(v5);
    v24 = v6 | 0x20;
    if ( (((v6 | 0x20) ^ v7) & 0xFFFFFFFFFF000LL) != 0 )
      MiWriteValidPteNewPage(v4, v24, 0LL, v3);
    else
      MiWriteValidPteNewProtection((ULONG_PTR)v4, v24, v2);
    v26 = v84;
    *(_DWORD *)(v84 + 16) = DWORD1(v87);
    v27 = _InterlockedDecrement((volatile signed __int32 *)v21);
    v28 = ~v27 & 0x80000000;
    if ( (v27 & 0x3FFFFFFF) != 0 )
    {
      v29 = 0;
      v30 = 0;
      while ( (*(_DWORD *)v21 & 0x80000000) != v28 )
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v30;
          if ( (unsigned __int8)KeCanUseHaltOnAddress(v31) && (KiVelocityFlags & 0x20000) != 0 && (v30 & 7) == 0 )
          {
            v32 = *(_DWORD *)v21;
            if ( (*(_DWORD *)v21 & 0x80000000) != v28 )
            {
              v33 = *(_DWORD *)v21;
              v34 = *(_DWORD *)v21;
              do
              {
                v35 = v32 | 0x40000000;
                v32 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v32 | 0x40000000, v33);
                if ( v32 == v34 )
                {
                  v78 = v35;
                  do
                  {
                    KiHaltOnAddress(v21, &v78, 4LL);
                    v32 = *(_DWORD *)v21;
                  }
                  while ( *(_DWORD *)v21 == v35 );
                }
                v33 = v32;
                v34 = v32;
              }
              while ( (v32 & 0x80000000) != v28 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v29);
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
      v78 = _InterlockedExchange((volatile __int32 *)v21, *(_DWORD *)(v21 + 4) | v28);
      if ( (v78 & 0x40000000) != 0 )
        KeWakeAddressAll(v21, v25);
    }
  }
  DWORD1(v87) = *(_DWORD *)(v26 + 16);
  MiFlushTbList((__int64)&v86);
  v50 = _InterlockedDecrement((volatile signed __int32 *)v21);
  v51 = ~v50 & 0x80000000;
  if ( (v50 & 0x3FFFFFFF) != 0 )
  {
    v61 = 0;
    v62 = 0;
    while ( (*(_DWORD *)v21 & 0x80000000) != v51 )
    {
      if ( (++v61 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v62;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v63) && (KiVelocityFlags & 0x20000) != 0 && (v62 & 7) == 0 )
        {
          v64 = *(_DWORD *)v21;
          if ( (*(_DWORD *)v21 & 0x80000000) != v51 )
          {
            LODWORD(v49) = *(_DWORD *)v21;
            v65 = *(_DWORD *)v21;
            do
            {
              v66 = v64 | 0x40000000;
              v64 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v64 | 0x40000000, v49);
              if ( v64 == v65 )
              {
                v81 = v66;
                do
                {
                  KiHaltOnAddress(v21, &v81, 4LL);
                  v64 = *(_DWORD *)v21;
                }
                while ( *(_DWORD *)v21 == v66 );
              }
              v49 = v64;
              v65 = v64;
            }
            while ( (v64 & 0x80000000) != v51 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v61);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v67 = _InterlockedDecrement((volatile signed __int32 *)v21);
    v53 = ~v67 & 0x80000000;
    if ( (v67 & 0x3FFFFFFF) == 0 )
      goto LABEL_74;
    v68 = 0;
    v69 = 0;
    while ( (*(_DWORD *)v21 & 0x80000000) != v53 )
    {
      if ( (++v68 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v69;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v70) && (KiVelocityFlags & 0x20000) != 0 && (v69 & 7) == 0 )
        {
          v71 = *(_DWORD *)v21;
          if ( (*(_DWORD *)v21 & 0x80000000) != v53 )
          {
            v72 = *(_DWORD *)v21;
            v73 = *(_DWORD *)v21;
            do
            {
              v74 = v71 | 0x40000000;
              v71 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v71 | 0x40000000, v72);
              if ( v71 == v73 )
              {
                v83 = v74;
                do
                {
                  KiHaltOnAddress(v21, &v83, 4LL);
                  v71 = *(_DWORD *)v21;
                }
                while ( *(_DWORD *)v21 == v74 );
              }
              v72 = v71;
              v73 = v71;
            }
            while ( (v71 & 0x80000000) != v53 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v68);
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
    v81 = _InterlockedExchange((volatile __int32 *)v21, *(_DWORD *)(v21 + 4) | v51);
    if ( (v81 & 0x40000000) != 0 )
      KeWakeAddressAll(v21, v49);
    v52 = _InterlockedDecrement((volatile signed __int32 *)v21);
    v53 = ~v52 & 0x80000000;
    if ( (v52 & 0x3FFFFFFF) == 0 )
    {
LABEL_74:
      if ( (_InterlockedExchange((volatile __int32 *)v21, *(_DWORD *)(v21 + 4) | v53) & 0x40000000) != 0 )
        KeWakeAddressAll(v21, v49);
      goto LABEL_129;
    }
    v54 = 0;
    v55 = 0;
    while ( (*(_DWORD *)v21 & 0x80000000) != v53 )
    {
      if ( (++v54 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v55;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v56) && (KiVelocityFlags & 0x20000) != 0 && (v55 & 7) == 0 )
        {
          v57 = *(_DWORD *)v21;
          if ( (*(_DWORD *)v21 & 0x80000000) != v53 )
          {
            v58 = *(_DWORD *)v21;
            v59 = *(_DWORD *)v21;
            do
            {
              v60 = v57 | 0x40000000;
              v57 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v57 | 0x40000000, v58);
              if ( v57 == v59 )
              {
                v82 = v60;
                do
                {
                  KiHaltOnAddress(v21, &v82, 4LL);
                  v57 = *(_DWORD *)v21;
                }
                while ( *(_DWORD *)v21 == v60 );
              }
              v58 = v57;
              v59 = v57;
            }
            while ( (v57 & 0x80000000) != v53 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v54);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
LABEL_129:
  DWORD1(v87) = *(_DWORD *)(v26 + 52) & 0xFFFFFEBD | 0x100;
  MiFlushTbList((__int64)&v86);
  v76 = v85;
  if ( KiIrqlFlags )
  {
    LOBYTE(v75) = v85;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v75);
  }
  result = v76;
  __writecr8(v76);
  return result;
}
