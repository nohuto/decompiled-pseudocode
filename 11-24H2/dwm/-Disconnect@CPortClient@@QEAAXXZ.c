/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x1400042F0
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x140002EC8 (--1CPortClient@@UEAA@XZ.c)
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
