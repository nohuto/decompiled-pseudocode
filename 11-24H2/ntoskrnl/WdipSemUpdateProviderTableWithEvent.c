/*
 * XREFs of WdipSemUpdateProviderTableWithEvent @ 0x1407A2338
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemUpdateProviderTableWithEvent(_QWORD *a1)
{
  unsigned int v1; // ebx
  unsigned int i; // ecx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  _OWORD *v8; // rsi
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0; i < dword_140F021A0; ++i )
    {
      v4 = (_QWORD *)WdipSemProviderTable[i];
      v5 = *a1 - *v4;
      if ( *a1 == *v4 )
        v5 = a1[1] - v4[1];
      if ( !v5 )
      {
        if ( v4 )
        {
          a1[5] = v4;
          return v1;
        }
        break;
      }
    }
    if ( (unsigned int)dword_140F021A0 < 0x400 )
    {
      v7 = (_OWORD *)WdipSemFastAllocate(2LL, 80LL);
      v8 = v7;
      if ( v7 )
      {
        memset_0(v7, 0, 0x50uLL);
        *v8 = *(_OWORD *)a1;
        WdipSemProviderTable[dword_140F021A0++] = v8;
        a1[5] = v8;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_PROVIDER_MAX) )
      {
        v10[0] = a1;
        v10[1] = 16LL;
        WdipSemWriteEvent(v6, &WDI_SEM_EVENT_INIT_PROVIDER_MAX, 0LL, 1LL, v10);
      }
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
