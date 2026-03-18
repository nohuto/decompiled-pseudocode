/*
 * XREFs of ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1402633C0
 * Callers:
 *     _RegisterDManipHook @ 0x14021A630 (_RegisterDManipHook.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x140145920 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCbCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v3; // r8
  unsigned __int16 *v4; // rax
  __int64 v5; // r9
  NTSTATUS result; // eax
  size_t v7; // [rsp+20h] [rbp-18h]

  v3 = 130LL;
  v4 = a1;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v5 = (130 - v3) & -(__int64)(v3 != 0);
    return RtlStringCopyWorkerW(&a1[v5], 130 - v5, (size_t *)v3, L"\\System32\\directmanipulation.dll", v7);
  }
  return result;
}
