/*
 * XREFs of IoQueryInformationByName @ 0x1409590B0
 * Callers:
 *     NtQueryInformationByName @ 0x140959080 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408AABE0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409568C0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopValidateQueryInformationParameters @ 0x140958CB0 (IopValidateQueryInformationParameters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        unsigned __int64 a2,
        PVOID a3,
        unsigned int a4,
        signed int a5,
        __int16 a6,
        _QWORD *Src)
{
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char PreviousMode; // al
  int v13; // esi
  __int64 result; // rax
  int v15; // ecx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v18; // edi
  PVOID v19; // rsi
  ULONG_PTR v20; // rcx
  size_t v21; // r8
  _DWORD v24[12]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v25; // [rsp+90h] [rbp-218h]
  int v26; // [rsp+A0h] [rbp-208h]
  __int16 v27; // [rsp+A6h] [rbp-202h]
  int v28; // [rsp+B4h] [rbp-1F4h]
  int v29; // [rsp+B8h] [rbp-1F0h]
  PVOID P; // [rsp+D0h] [rbp-1D8h]
  char v31; // [rsp+E9h] [rbp-1BFh]
  _BYTE *v32; // [rsp+F0h] [rbp-1B8h]
  int v33; // [rsp+F8h] [rbp-1B0h]
  _OWORD v34[2]; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 CurrentSilo; // [rsp+120h] [rbp-188h]
  int v36; // [rsp+128h] [rbp-180h]
  unsigned int Size; // [rsp+12Ch] [rbp-17Ch]
  char Size_4; // [rsp+130h] [rbp-178h]
  __int64 v39; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v40[272]; // [rsp+150h] [rbp-158h] BYREF

  memset_0(v40, 0, sizeof(v40));
  v9 = 0;
  v10 = 0;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) == 0 )
    v11 = PreviousMode;
  v13 = a5;
  result = IopValidateQueryInformationParameters(v11, (__int64)KeGetCurrentThread(), a2, (unsigned __int64)a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( !v11 && a5 == 75 )
    {
      v13 = 71;
      v10 = 1;
    }
    if ( (unsigned int)(v13 - 68) > 9 )
      return 3221225485LL;
    v15 = 525;
    if ( !_bittest(&v15, v13 - 68) )
      return 3221225485LL;
    memset_0(v24, 0, 0xE0uLL);
    v24[0] = 14680072;
    v27 = 7;
    v29 = 1;
    v26 = 2113536;
    v31 = 1;
    Size_4 = 1;
    v32 = v40;
    v25 = a1;
    v33 = 32;
    v36 = v13;
    Size = a4;
    memset(v34, 0, sizeof(v34));
    LOWORD(v34[0]) = 40;
    v16 = 1LL;
    CurrentSilo = 1LL;
    if ( v10 )
      v28 |= 1u;
    if ( Src )
    {
      v20 = Src[1];
      if ( v20 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v20);
        if ( (int)result < 0 )
          return result;
      }
      if ( Src[2] )
        v33 |= 1u;
      if ( Src[3] )
        v33 |= 4u;
      v21 = *(__int16 *)Src;
      if ( v21 > 0x28 )
        v21 = 40LL;
      memmove(v34, Src, v21);
      v16 = CurrentSilo;
    }
    if ( v16 == 1 )
      CurrentSilo = (__int64)PsGetCurrentSilo();
    if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
    {
      P = (PVOID)ExAllocatePool2(0x41uLL, a4, 0x20206F49u);
      if ( !P )
        return 3221225626LL;
    }
    else
    {
      P = a3;
    }
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v18 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, v11, 0LL, 128, (__int64)v24, CurrentSilo, &v39);
    IopCleanupExtraCreateParameters((__int64)v24);
    if ( v24[8] == -1096154543 )
      v18 = v24[4];
    v19 = P;
    if ( a3 != P )
    {
      if ( v18 >= 0 )
        memmove(a3, P, Size);
      ExFreePoolWithTag(v19, 0);
    }
    *(_DWORD *)a2 = v18;
    if ( v18 >= 0 )
      v9 = Size;
    *(_QWORD *)(a2 + 8) = v9;
    return (unsigned int)v18;
  }
  return result;
}
