/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x140277F64
 * Callers:
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x140218280 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 * Callees:
 *     _InitializeTouchInjectionWorker @ 0x140278960 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall RealizePendingRecreateTouchInjectionDevices(struct tagPROCESSINFO *a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  struct tagPROCESSINFO *v11; // rax
  _QWORD *v12; // rdx

  v2 = *((_QWORD *)a1 + 111);
  v5 = 1;
  ForceUpdatePointerDeviceSystemMetrics();
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19320) )
  {
    if ( v2 )
    {
      if ( !a2 && !*(_DWORD *)(v2 + 52) )
        return v5;
      v5 = InitializeTouchInjectionWorker(
             *(unsigned int *)(*((_QWORD *)a1 + 111) + 28LL),
             *(unsigned int *)(*((_QWORD *)a1 + 111) + 24LL),
             a1);
    }
    if ( a2 )
    {
      v10 = *(_QWORD **)(W32GetUserSessionState(v9, v8) + 19320);
      if ( v10 )
      {
        do
        {
          v11 = (struct tagPROCESSINFO *)v10[1];
          v12 = (_QWORD *)*v10;
          if ( v11 != a1 )
            *(_DWORD *)(*((_QWORD *)v11 + 111) + 52LL) = 1;
          v10 = v12;
        }
        while ( v12 );
      }
    }
  }
  return v5;
}
