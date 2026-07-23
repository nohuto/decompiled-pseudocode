/*
 * XREFs of RtlApplyRXact @ 0x180109070
 * Callers:
 *     <none>
 * Callees:
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlAbortRXact @ 0x180109340 (RtlAbortRXact.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x180165050 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  size_t v3; // rax
  ULONG *Data; // rcx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  void *v7; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"Log";
  v3 = 2 * wcslen(L"Log");
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  Data = *(ULONG **)(a1 + 24);
  ValueName.Length = v3;
  ValueName.MaximumLength = v3 + 2;
  result = ZwSetValueKey(v1, &ValueName, 0, 3u, Data, Data[2]);
  if ( result >= 0 )
  {
    v6 = ZwFlushKey(v1);
    if ( v6 < 0 )
    {
      v7 = v1;
    }
    else
    {
      v6 = RXactpCommit(a1);
      v7 = v1;
      if ( v6 >= 0 )
      {
        ZwDeleteValueKey(v1, &ValueName);
        RtlAbortRXact(a1);
        return 0;
      }
    }
    ZwDeleteValueKey(v7, &ValueName);
    return v6;
  }
  return result;
}
