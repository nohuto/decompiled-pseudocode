/*
 * XREFs of ProcessNvmeHealthInfoLog @ 0x140005380
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400047E0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1400111F0 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     SendNVMeEventNotification @ 0x14002FFC8 (SendNVMeEventNotification.c)
 */

__int64 __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int128 v9; // xmm2
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  char v19; // dl
  bool v20; // zf
  unsigned int v21; // r10d
  unsigned __int8 v22; // al
  char v23; // al
  char v24; // al
  int v26; // [rsp+20h] [rbp-118h]
  const wchar_t *v27; // [rsp+28h] [rbp-110h]
  __int64 v28; // [rsp+30h] [rbp-108h]
  int v29; // [rsp+38h] [rbp-100h]
  int v30; // [rsp+40h] [rbp-F8h]
  __int64 v31; // [rsp+48h] [rbp-F0h]
  const wchar_t *v32; // [rsp+50h] [rbp-E8h]
  __int64 v33; // [rsp+58h] [rbp-E0h]
  const wchar_t *v34; // [rsp+60h] [rbp-D8h]
  __int64 v35; // [rsp+68h] [rbp-D0h]
  const wchar_t *v36; // [rsp+70h] [rbp-C8h]
  __int64 v37; // [rsp+78h] [rbp-C0h]
  const wchar_t *v38; // [rsp+80h] [rbp-B8h]
  __int64 v39; // [rsp+88h] [rbp-B0h]
  const wchar_t *v40; // [rsp+90h] [rbp-A8h]
  __int64 v41; // [rsp+98h] [rbp-A0h]
  const wchar_t *v42; // [rsp+A0h] [rbp-98h]
  __int64 v43; // [rsp+A8h] [rbp-90h]
  __int64 v44; // [rsp+B0h] [rbp-88h]
  __int64 v45; // [rsp+B8h] [rbp-80h]
  __int64 v46; // [rsp+C0h] [rbp-78h]
  __int64 v47; // [rsp+C8h] [rbp-70h]
  __int128 v48; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-58h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  v8 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( (v7 & 0xFFF) == 0 )
    v8 = v7;
  v9 = *(_OWORD *)(v8 + 4096);
  v10 = *(_QWORD *)(v8 + 4096);
  v49 = v9;
  if ( HIDWORD(v10) == -1 || (v11 = *(_DWORD *)(a1 + 224), v12 = 0, !v11) )
  {
LABEL_11:
    v13 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 8LL * v12 + 1672);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 16) == DWORD1(v49) )
          break;
      }
      if ( ++v12 >= v11 )
        goto LABEL_11;
    }
  }
  v14 = *(_DWORD *)(a1 + 56);
  v15 = 0;
  v16 = *a3;
  v48 = 0LL;
  if ( (v14 & 0x80u) != 0 )
  {
    v16 |= 4u;
    *a3 = v16;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x100) != 0 )
  {
    v16 |= 8u;
    *a3 = v16;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x200) != 0 )
  {
    v16 |= 0x10u;
    *a3 = v16;
  }
  v17 = *(_BYTE *)(a1 + 140);
  if ( v17 )
    a3[3] = v17;
  v18 = *(_BYTE *)(a1 + 141);
  if ( v18 )
    a3[4] = v18;
  if ( *(_BYTE *)(a1 + 140) || (v19 = v16, *(_BYTE *)(a1 + 141)) )
  {
    v19 = v16;
    if ( a3[3] < a3[4] )
    {
      v19 = v16 | 1;
      *a3 = v16 | 1;
    }
  }
  if ( v19 && v19 != *(_BYTE *)(a1 + 22) )
  {
    v20 = (*(_BYTE *)(a1 + 21) & 4) == 0;
    *(_BYTE *)(a1 + 22) = v19;
    if ( !v20 )
    {
      v21 = *a3;
      v47 = 0LL;
      v46 = 0LL;
      v45 = 0LL;
      v44 = 0LL;
      v43 = (v21 >> 4) & 1;
      v42 = L"Volatile Backup Device Failure";
      v41 = (v21 >> 3) & 1;
      v40 = L"Read Only Mode";
      v39 = (v21 >> 2) & 1;
      v38 = L"NVM Reliability Degraded";
      v37 = (v21 >> 1) & 1;
      v36 = L"Temperature Threshold";
      v35 = v21 & 1;
      v34 = L"Spare Below Threshold";
      v33 = *a3;
      v32 = L"CriticalWarning";
      v31 = 0LL;
      v30 = 0;
      v29 = 2;
      v28 = 32LL;
      v27 = L"Health Status-Critical Warning";
      v26 = a4;
      StorPortExtendedFunction(87LL, a1, v13, 2LL);
    }
    if ( a4 == 9 )
    {
      if ( (*a3 & 2) != *a3 )
      {
        v15 = 1;
        *(_DWORD *)(a1 + 3960) = *(_DWORD *)(a1 + 3960) & ~*(unsigned __int8 *)(a1 + 22) | 2;
      }
      v22 = *a3;
      if ( (*a3 & 1) != 0 )
      {
        *(_QWORD *)&v48 = v48 | 1;
      }
      else if ( (v22 & 2) != 0 )
      {
        *(_QWORD *)&v48 = v48 | 2;
      }
      else if ( (v22 & 4) != 0 )
      {
        *(_QWORD *)&v48 = v48 | 4;
      }
      else if ( (v22 & 8) != 0 )
      {
        *(_QWORD *)&v48 = v48 | 8;
      }
      else if ( (v22 & 0x10) != 0 )
      {
        *(_QWORD *)&v48 = v48 | 0x10;
      }
      else
      {
        *(_QWORD *)&v48 = v48 | 0x800;
      }
      SendNVMeEventNotification(
        a1,
        &v48,
        a3,
        512LL,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
  }
  if ( a3[5] >= 0x5Fu )
  {
    v23 = *(_BYTE *)(a1 + 21);
    if ( (v23 & 4) != 0 && (v23 & 0x40) == 0 )
    {
      StorPortExtendedFunction(85LL, a1, v13, 2LL);
      *(_BYTE *)(a1 + 21) |= 0x40u;
    }
  }
  if ( a3[3] <= 2u )
  {
    v24 = *(_BYTE *)(a1 + 21);
    if ( (v24 & 4) != 0 && v24 >= 0 )
    {
      StorPortExtendedFunction(85LL, a1, v13, 2LL);
      *(_BYTE *)(a1 + 21) |= 0x80u;
    }
  }
  return v15;
}
