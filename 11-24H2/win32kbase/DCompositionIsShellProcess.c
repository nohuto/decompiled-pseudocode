/*
 * XREFs of DCompositionIsShellProcess @ 0x140073840
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140023B1C (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool DCompositionIsShellProcess()
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcess; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi

  v0 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    CurrentProcess = PsGetCurrentProcess(v2, v1, v4, v5);
    v7 = *((_QWORD *)DefaultConnection + 33);
    v8 = CurrentProcess;
    DirectComposition::CConnection::Release(DefaultConnection);
    return v8 == v7;
  }
  return v0;
}
