/*
 * XREFs of MiProtectSystemImage @ 0x140A90AEC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F986C (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1407E80F0 (MiWriteProtectSystemImages.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E79F8 (MiActOnLargeKernelHalPages.c)
 *     MiComputeDriverProtection @ 0x140A90E20 (MiComputeDriverProtection.c)
 */

_OWORD *__fastcall MiProtectSystemImage(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  _OWORD *result; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  _OWORD *v9; // r14
  int v10; // r10d
  unsigned int *v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // r8
  unsigned __int64 PteAddress; // r13
  __int64 v16; // r11
  unsigned __int64 v17; // r12
  int v18; // r15d
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // r9d
  unsigned int v31; // r11d
  unsigned __int64 v32; // r10
  unsigned int v33; // eax
  unsigned __int64 v34; // r10
  int v35; // [rsp+30h] [rbp-98h]
  unsigned int v36; // [rsp+34h] [rbp-94h]
  int v38; // [rsp+3Ch] [rbp-8Ch]
  int v39; // [rsp+40h] [rbp-88h]
  unsigned __int64 v40; // [rsp+48h] [rbp-80h]
  unsigned __int64 v41; // [rsp+50h] [rbp-78h]
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  char *v44; // [rsp+68h] [rbp-60h]
  _OWORD v45[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v46; // [rsp+90h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 48);
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  result = (_OWORD *)MI_IS_PHYSICAL_ADDRESS(v2);
  v6 = 0;
  if ( (_DWORD)result )
  {
    if ( v2 == PsNtosImageBase || v2 == PsHalImageBase )
    {
      LOBYTE(v6) = a2 != 0;
      return (_OWORD *)MiActOnLargeKernelHalPages(v2, (__int64)MiProtectLargeKernelHalRange, v6);
    }
  }
  else
  {
    v7 = RtlImageNtHeader(v2);
    v43 = v7;
    v39 = *(_DWORD *)(a1 + 104) & 0x8000000;
    result = (_OWORD *)v2;
    v8 = *(unsigned __int16 *)(v7 + 6);
    v9 = (_OWORD *)(v7 + *(unsigned __int16 *)(v7 + 20) + 24LL);
    v10 = *(unsigned __int16 *)(v7 + 6);
    v11 = (unsigned int *)(v9 + 1);
    while ( v10 )
    {
      v12 = v2 + *(v11 - 1);
      if ( v12 < (unsigned __int64)result )
        return result;
      v13 = *v11;
      if ( *v11 < *(v11 - 2) )
        v13 = *(v11 - 2);
      --v10;
      result = (_OWORD *)(-(__int64)*(unsigned int *)(v7 + 56) & (v12 + *(unsigned int *)(v7 + 56) + v13 - 1LL));
      v11 += 10;
    }
    v38 = -1073741824;
    v44 = (char *)v9 + 40 * v8 - 1;
    PteAddress = MiGetPteAddress(v2);
    v35 = 0;
    v17 = 0LL;
    v41 = PteAddress + 8 * v16;
    v18 = v8 + 1;
    do
    {
      if ( v18 == 1 )
      {
        HIDWORD(v46) = 0;
        v9 = v45;
        v40 = 0LL;
        v36 = 0;
        v19 = MiGetPteAddress(v14) + 8;
      }
      else
      {
        v40 = v2 + *((unsigned int *)v9 + 3);
        v22 = MiGetPteAddress(v40);
        v21 = v35;
        v19 = v22;
        if ( v24 < v23 )
          v24 = v23;
        v36 = v24;
      }
      if ( v17 && v19 > v17 )
      {
        v25 = MiComputeDriverProtection(v21);
        MiSetSystemCodeProtection(a1, v17, v17, v25, a2);
        if ( v17 == PteAddress )
          PteAddress += 8LL;
        v20 = (unsigned __int64)v44;
        v17 = 0LL;
        v35 = 0;
      }
      if ( v19 >= v41 )
      {
        result = v45;
        if ( v9 != v45 )
          break;
      }
      v26 = *((_DWORD *)v9 + 9) & 0xE0000000;
      if ( !v39 && ((MiFlags & 0x8000) == 0 || (*((_DWORD *)v9 + 9) & 0x20000000) == 0) )
        v26 = *((_DWORD *)v9 + 9) & 0x60000000 | 0x80000000;
      if ( v26 == v38 && (v27 = *(_DWORD *)(v43 + 56), v27 <= 0x1000) )
      {
        v28 = v27;
      }
      else
      {
        v29 = MiGetPteAddress(v20);
        v32 = v29;
        if ( v29 == v19 )
        {
          v32 = v29 - 8;
          v17 = v19;
          v35 = v31 | v26 | v30;
        }
        if ( v32 >= PteAddress )
        {
          v33 = MiComputeDriverProtection(v31);
          MiSetSystemCodeProtection(a1, PteAddress, v34, v33, a2);
        }
        PteAddress = v19;
        v38 = v26;
        v28 = *(unsigned int *)(v43 + 56);
      }
      v9 = (_OWORD *)((char *)v9 + 40);
      result = (_OWORD *)(v28 + v36);
      v14 = (-v28 & ((unsigned __int64)result + v40 - 1)) - 1;
      v44 = (char *)v14;
      --v18;
    }
    while ( v18 );
  }
  return result;
}
