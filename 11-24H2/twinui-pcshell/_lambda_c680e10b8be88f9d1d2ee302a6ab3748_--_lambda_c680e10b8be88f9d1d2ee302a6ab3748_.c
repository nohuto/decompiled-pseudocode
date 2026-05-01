/*
 * XREFs of _lambda_c680e10b8be88f9d1d2ee302a6ab3748_::_lambda_c680e10b8be88f9d1d2ee302a6ab3748_ @ 0x180361BF8
 * Callers:
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180228494 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c680e10b8be88f9d1d2ee302a6ab3748_::_lambda_c680e10b8be88f9d1d2ee302a6ab3748_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 16) = *a4;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
