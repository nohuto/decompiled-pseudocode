/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FE5C
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000F5E0 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F890 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000FB24 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000FD00 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  HANDLE *v1; // rbx

  v1 = (HANDLE *)((char *)this + 16);
  if ( *((_QWORD *)this + 4) )
    NtAlpcDeletePortSection(*v1, 0LL);
  if ( *((_BYTE *)this + 24) && *v1 )
  {
    CloseHandle(*v1);
    *((_BYTE *)this + 24) = 0;
  }
  *v1 = 0LL;
  *((_DWORD *)this + 2) = 0;
}
