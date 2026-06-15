/*
 * XREFs of WPP_SF_S_guid_D @ 0x18011C28C
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001CFB0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_S_guid_D(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5, ...)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, 36LL, a4, v7, a5, 16LL, va);
}
