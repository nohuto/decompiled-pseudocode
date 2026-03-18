/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x140003B64
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x140003B1C (--1CPortClient@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  void *v2; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
