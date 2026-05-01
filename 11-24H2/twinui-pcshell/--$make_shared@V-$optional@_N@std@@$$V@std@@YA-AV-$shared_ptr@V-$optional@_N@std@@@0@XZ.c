/*
 * XREFs of ??$make_shared@V?$optional@_N@std@@$$V@std@@YA?AV?$shared_ptr@V?$optional@_N@std@@@0@XZ @ 0x1805EDA10
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805EFF00 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared<std::optional<bool>,>(__int64 a1)
{
  char *v2; // rdx
  __int64 result; // rax

  v2 = (char *)operator new(0x18uLL);
  *(_OWORD *)v2 = 0LL;
  v2[17] = 0;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<std::optional<bool>>::`vftable';
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v2 + 16;
  result = a1;
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}
