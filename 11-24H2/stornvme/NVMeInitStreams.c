/*
 * XREFs of NVMeInitStreams @ 0x14001E0C8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x140021758 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140027728 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1400277DC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140027940 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x140027C84 (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned int v8; // esi
  char v9; // cl
  __int64 v10; // r8
  __int64 v11; // r8
  __int16 v12; // cx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // dx
  __int64 v15; // r8
  __int16 v16; // cx
  __int16 v17; // ax
  __int128 v18; // [rsp+20h] [rbp-29h] BYREF
  __int128 v19; // [rsp+30h] [rbp-19h]
  _BYTE v20[64]; // [rsp+40h] [rbp-9h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 1560);
  if ( (*(_BYTE *)(v5 + 256) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3728) & 7) == 3 )
    return *(_BYTE *)(a1 + 3729) != (unsigned __int8)v3 ? 0xC1000003 : 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v7 = *(_QWORD *)(a1 + 8 * v3 + 1672)) != 0) )
    v8 = *(_DWORD *)(v7 + 16);
  else
    v8 = 0;
  v9 = *(_BYTE *)(a1 + 3728);
  if ( (v9 & 4) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 3729);
  }
  else if ( v8 > *(_DWORD *)(v5 + 516) || !*(_QWORD *)(a1 + 8 * v3 + 1672) )
  {
    return 3238002694LL;
  }
  if ( (v9 & 1) == 0 )
  {
    memset(v20, 0, sizeof(v20));
    result = NVMeDirectiveIdentifyReturnParameters(a1, v8, v10, v20);
    if ( (_DWORD)result )
      return result;
    if ( (v20[0] & 2) != 0 )
    {
      result = NVMeDirectiveIdentifyEnableDirective(a1);
      if ( (_DWORD)result )
        return result;
      result = NVMeDirectiveIdentifyReturnParameters(a1, v8, v11, v20);
      if ( (_DWORD)result )
        return result;
      if ( (v20[32] & 2) != 0 )
      {
        *(_BYTE *)(a1 + 3728) |= 1u;
        goto LABEL_19;
      }
    }
    return 3238002695LL;
  }
LABEL_19:
  v18 = 0LL;
  v19 = 0LL;
  result = NVMeDirectiveStreamsReturnParameters(a1, v8, a3, &v18);
  if ( (_DWORD)result )
    return result;
  v12 = WORD3(v19);
  v13 = v18;
  v14 = WORD1(v18);
  *(_DWORD *)(a1 + 3740) = v19;
  *(_DWORD *)(a1 + 3744) = WORD2(v19);
  *(_WORD *)(a1 + 3734) = WORD4(v19);
  *(_WORD *)(a1 + 3736) = v12 + v14;
  *(_BYTE *)(a1 + 3729) = v3;
  *(_WORD *)(a1 + 3730) = v13;
  *(_WORD *)(a1 + 3732) = v12;
  if ( !v13 )
    return 3238002695LL;
  if ( v13 > v14 )
    v13 = v14;
  if ( !v13 )
    return 3238002695LL;
  result = NVMeDirectiveStreamsAllocateResources(a1, v8);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveStreamsReturnParameters(a1, v8, v15, &v18);
    if ( !(_DWORD)result )
    {
      v16 = WORD3(v19);
      v17 = WORD3(v19) + WORD1(v18);
      *(_WORD *)(a1 + 3732) = WORD3(v19);
      *(_WORD *)(a1 + 3736) = v17;
      if ( v16 )
      {
        *(_BYTE *)(a1 + 3728) = *(_BYTE *)(a1 + 3728) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}
