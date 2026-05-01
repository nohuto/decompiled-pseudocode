/*
 * XREFs of CrmActivityTelemetryUpdateCurrentStates @ 0x18002FE80
 * Callers:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FB4C (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     CrmActivityTelemetryUpdate @ 0x18002F8D8 (CrmActivityTelemetryUpdate.c)
 */

void __fastcall CrmActivityTelemetryUpdateCurrentStates(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rdi

  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    v2 = 0;
    v3 = (_QWORD *)(a1 + 248);
    do
    {
      if ( *v3 != -1LL )
        CrmActivityTelemetryUpdate(a1, v2);
      ++v2;
      ++v3;
    }
    while ( v2 < 3 );
  }
}
