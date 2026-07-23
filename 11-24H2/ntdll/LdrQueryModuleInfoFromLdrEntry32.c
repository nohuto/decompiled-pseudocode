/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry32 @ 0x18007C0F0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpReadMemory @ 0x18007D430 (LdrpReadMemory.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrQueryModuleInfoFromLdrEntry32(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-61h] BYREF
  _WORD v13[2]; // [rsp+28h] [rbp-59h] BYREF
  int v14; // [rsp+2Ch] [rbp-55h]
  __int64 v15; // [rsp+30h] [rbp-51h]
  _BYTE v16[24]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-29h]
  int v18; // [rsp+60h] [rbp-21h]
  __int16 v19; // [rsp+64h] [rbp-1Dh]
  __int16 v20; // [rsp+66h] [rbp-1Bh]
  unsigned int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+74h] [rbp-Dh]
  __int16 v23; // [rsp+78h] [rbp-9h]

  v14 = 0;
  memset_thunk_772440563353939046(v16, 0, 0x48uLL);
  result = LdrpReadMemory(a1, a3, v16, 72LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v17;
    *(_DWORD *)(a2 + 24) = v18;
    *(_DWORD *)(a2 + 28) = v22;
    *(_WORD *)(a2 + 36) = v23;
    if ( (a5 & 2) != 0 )
    {
      v12 = 0;
      v10 = 500;
      v11 = a4;
      do
      {
        if ( (int)LdrpReadMemory(a1, v11, &v12, 4LL) < 0 )
          break;
        v11 = v12;
        if ( v12 == a4 )
          break;
        ++*(_WORD *)(a2 + 34);
        if ( a3 == v11 - 16 )
          break;
        --v10;
      }
      while ( v10 );
    }
    v15 = v21;
    v13[0] = v19;
    v13[1] = v20;
    return LdrpGetModuleName(a1, v13, a2, 1LL);
  }
  return result;
}
