/*
 * XREFs of IoQueryInformationByName @ 0x1409870E0
 * Callers:
 *     NtQueryInformationByName @ 0x1409870B0 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1408ED4B0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopCleanupExtraCreateParameters @ 0x1408EF8F0 (IopCleanupExtraCreateParameters.c)
 *     IopValidateQueryInformationParameters @ 0x140988620 (IopValidateQueryInformationParameters.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        __int64 a2,
        PVOID a3,
        unsigned int a4,
        int a5,
        __int16 a6,
        _QWORD *Src)
{
  int v9; // ecx
  unsigned int v10; // ebx
  char v11; // r12
  unsigned __int8 v12; // r13
  char PreviousMode; // al
  int v14; // esi
  __int64 result; // rax
  int v16; // ecx
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v19; // edi
  PVOID v20; // rsi
  ULONG_PTR v21; // rcx
  size_t v22; // r8
  _DWORD v25[12]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v26; // [rsp+90h] [rbp-218h]
  int v27; // [rsp+A0h] [rbp-208h]
  __int16 v28; // [rsp+A6h] [rbp-202h]
  int v29; // [rsp+B4h] [rbp-1F4h]
  int v30; // [rsp+B8h] [rbp-1F0h]
  PVOID P; // [rsp+D0h] [rbp-1D8h]
  char v32; // [rsp+E9h] [rbp-1BFh]
  _BYTE *v33; // [rsp+F0h] [rbp-1B8h]
  int v34; // [rsp+F8h] [rbp-1B0h]
  _OWORD v35[2]; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 CurrentSilo; // [rsp+120h] [rbp-188h]
  int v37; // [rsp+128h] [rbp-180h]
  unsigned int Size; // [rsp+12Ch] [rbp-17Ch]
  char Size_4; // [rsp+130h] [rbp-178h]
  __int64 v40; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v41[272]; // [rsp+150h] [rbp-158h] BYREF

  memset_0(v41, 0, sizeof(v41));
  v10 = 0;
  v11 = 0;
  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) == 0 )
    v12 = PreviousMode;
  v14 = a5;
  LOBYTE(v9) = v12;
  result = IopValidateQueryInformationParameters(v9, (unsigned int)KeGetCurrentThread(), a2, (_DWORD)a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( !v12 && a5 == 75 )
    {
      v14 = 71;
      v11 = 1;
    }
    if ( (unsigned int)(v14 - 68) > 9 )
      return 3221225485LL;
    v16 = 525;
    if ( !_bittest(&v16, v14 - 68) )
      return 3221225485LL;
    memset_0(v25, 0, 0xE0uLL);
    v25[0] = 14680072;
    v28 = 7;
    v30 = 1;
    v27 = 2113536;
    v32 = 1;
    Size_4 = 1;
    v33 = v41;
    v26 = a1;
    v34 = 32;
    v37 = v14;
    Size = a4;
    memset(v35, 0, sizeof(v35));
    LOWORD(v35[0]) = 40;
    v17 = 1LL;
    CurrentSilo = 1LL;
    if ( v11 )
      v29 |= 1u;
    if ( Src )
    {
      v21 = Src[1];
      if ( v21 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v21);
        if ( (int)result < 0 )
          return result;
      }
      if ( Src[2] )
        v34 |= 1u;
      if ( Src[3] )
        v34 |= 4u;
      v22 = *(__int16 *)Src;
      if ( v22 > 0x28 )
        v22 = 40LL;
      memmove(v35, Src, v22);
      v17 = CurrentSilo;
    }
    if ( v17 == 1 )
      CurrentSilo = (__int64)PsGetCurrentSilo();
    if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
    {
      P = (PVOID)ExAllocatePool2(0x41uLL);
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
    v19 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, v12, 0LL, 128, (int)v25, CurrentSilo, &v40);
    IopCleanupExtraCreateParameters((__int64)v25);
    if ( v25[8] == -1096154543 )
      v19 = v25[4];
    v20 = P;
    if ( a3 != P )
    {
      if ( v19 >= 0 )
        memmove(a3, P, Size);
      ExFreePoolWithTag(v20, 0);
    }
    *(_DWORD *)a2 = v19;
    if ( v19 >= 0 )
      v10 = Size;
    *(_QWORD *)(a2 + 8) = v10;
    return (unsigned int)v19;
  }
  return result;
}
