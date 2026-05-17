/*
 * XREFs of TpQueryPoolStackInformation @ 0x18015DA60
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationWorkerFactory @ 0x180165D70 (ZwQueryInformationWorkerFactory.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TpQueryPoolStackInformation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v5[96]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+90h] [rbp-28h]
  __int64 v7; // [rsp+98h] [rbp-20h]

  memset_thunk_772440563353939046(v5, 0, 0x78uLL);
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = ZwQueryInformationWorkerFactory(*(_QWORD *)(a1 + 56), 7LL, v5);
  if ( (int)result >= 0 )
  {
    a2[1] = v7;
    *a2 = v6;
  }
  return result;
}
