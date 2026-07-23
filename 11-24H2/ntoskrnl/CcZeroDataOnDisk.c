/*
 * XREFs of CcZeroDataOnDisk @ 0x140260430
 * Callers:
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 */

unsigned __int64 __fastcall CcZeroDataOnDisk(struct _FILE_OBJECT *a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  char v3; // bp
  __int64 v5; // rbx
  unsigned int v6; // edi
  NTSTATUS v7; // ecx
  unsigned __int64 result; // rax
  unsigned int i; // esi
  LARGE_INTEGER v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *a3 - a2->QuadPart;
  v10 = *a2;
  if ( v5 >= (unsigned int)CcMaxZeroTransferSize )
  {
    if ( _InterlockedIncrement(&CcAggressiveZeroCount) > CcAggressiveZeroThreshold )
    {
      _InterlockedDecrement(&CcAggressiveZeroCount);
      v6 = 0x10000;
    }
    else
    {
      v6 = CcMaxZeroTransferSize;
      v3 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  while ( 1 )
  {
    result = HIDWORD(v5);
    if ( !HIDWORD(v5) )
      break;
    for ( i = 0; i < 4; ++i )
    {
      v7 = MiZeroPageWrite(a1, &v10, 0x40000000u, v6);
      if ( v7 < 0 )
        goto LABEL_7;
      v5 -= 0x40000000LL;
    }
  }
  if ( (_DWORD)v5 && (result = MiZeroPageWrite(a1, &v10, v5, v6), v7 = result, (result & 0x80000000) != 0LL) || v7 < 0 )
LABEL_7:
    RtlRaiseStatus(v7);
  if ( v3 )
    _InterlockedDecrement(&CcAggressiveZeroCount);
  return result;
}
