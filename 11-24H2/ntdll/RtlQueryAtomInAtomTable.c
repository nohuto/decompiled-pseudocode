/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1801191C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800AEA00 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1800AEA2C (RtlpAtomMapAtomToHandleEntry.c)
 *     _snwprintf_s @ 0x18012CE60 (_snwprintf_s.c)
 *     Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline @ 0x18013C074 (Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        volatile signed __int32 **a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r14
  unsigned __int16 *v18; // rax
  unsigned int v19; // eax
  wchar_t Buffer[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = (unsigned __int16)a2;
  v9 = 0;
  if ( !RtlpLockAtomTable(a1, a2, (unsigned __int64)a3) )
    return 3221225485LL;
  if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    v9 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v11 = -1073741816;
    v14 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v17 = v14;
    if ( !v14 )
      goto LABEL_44;
    if ( *(_WORD *)(v14 + 10) != (_WORD)v8 )
      goto LABEL_44;
    v18 = (unsigned __int16 *)(v14 + 12);
    if ( !v18 )
      goto LABEL_44;
    v11 = v16;
    if ( a3 )
      *a3 = *v18;
    if ( a4 )
      *a4 = *(unsigned __int16 *)(v17 + 14);
    if ( !a5 )
      goto LABEL_44;
    v12 = 2 * *(unsigned __int8 *)(v17 + 16);
    if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v9 )
        goto LABEL_40;
      if ( v9 >= 2 )
      {
        v12 = v9 - 2;
        goto LABEL_40;
      }
    }
    else
    {
      v19 = *a6;
      if ( v12 < *a6 )
        goto LABEL_40;
      if ( v19 >= 2 )
      {
        v12 = v19 - 2;
        goto LABEL_40;
      }
    }
    *a6 = v12;
    v12 = 0;
LABEL_40:
    if ( v12 )
    {
      memmove(a5, (const void *)(v17 + 18), v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
      goto LABEL_23;
    }
LABEL_42:
    v11 = -1073741789;
    goto LABEL_43;
  }
  if ( (_WORD)v8 )
  {
    v11 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_43;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v9 )
        goto LABEL_21;
      if ( v9 >= 2 )
      {
        v12 = v9 - 2;
        goto LABEL_21;
      }
    }
    else
    {
      v13 = *a6;
      if ( v12 < *a6 )
        goto LABEL_21;
      if ( v13 >= 2 )
      {
        v12 = v13 - 2;
        goto LABEL_21;
      }
    }
    v12 = 0;
LABEL_21:
    if ( v12 )
    {
      memmove(a5, Buffer, v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
LABEL_23:
      *a6 = v12;
      goto LABEL_43;
    }
    goto LABEL_42;
  }
  v11 = -1073741811;
LABEL_43:
  v15 = a1;
LABEL_44:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 8));
  return v11;
}
