/*
 * XREFs of _CmCreateInterfaceClassWorker @ 0x1409C3DBC
 * Callers:
 *     _CmCreateInterfaceClass @ 0x1409C3C28 (_CmCreateInterfaceClass.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x1409C423C (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInterfaceClassWorker(_QWORD *a1, WCHAR *a2, int a3, _QWORD *a4, _BYTE *a5, __int16 a6)
{
  int v9; // ebx
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenCommonClassRegKey(a1, a2, 64, 0, a3, 1, (__int64)a4, v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 4LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
