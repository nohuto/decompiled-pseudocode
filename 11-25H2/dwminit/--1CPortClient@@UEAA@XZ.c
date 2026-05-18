/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x18000F6B8
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000EDA0 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000F730 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // r8

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &CPortClient::`vftable';
  if ( !v1 )
  {
    v3 = (void *)*((_QWORD *)this + 2);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  *((_DWORD *)this + 2) = 0;
  if ( v4 )
  {
    HeapFree(*((HANDLE *)this + 6), 0, v4);
    *((_QWORD *)this + 5) = 0LL;
  }
}
