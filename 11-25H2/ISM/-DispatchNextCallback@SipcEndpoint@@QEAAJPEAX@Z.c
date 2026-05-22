/*
 * XREFs of ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180062D50
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010CD60 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     ?EnableSectionEvents@SipcPort@@QEAAXXZ @ 0x18010CE40 (-EnableSectionEvents@SipcPort@@QEAAXXZ.c)
 *     ?GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z @ 0x18010D0F0 (-GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcEndpoint::DispatchNextCallback(SipcEndpoint *this, void *a2)
{
  unsigned int SectionEvent; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdx
  char *v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-50h]
  char v17[16]; // [rsp+40h] [rbp-48h] BYREF
  char v18; // [rsp+50h] [rbp-38h] BYREF

  memset_0(&v15, 0, 0x40uLL);
  SectionEvent = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 2) + 32LL))(
                   *((_QWORD *)this + 2),
                   &v15);
  if ( SectionEvent != 1 )
  {
LABEL_14:
    v5 = v15;
    goto LABEL_4;
  }
  if ( a2 != *((void **)this + 4) )
  {
    if ( !*((_DWORD *)this + 16) )
      SectionEvent = SipcPort::GetSectionEvent(*((SipcPort **)this + 2), (struct SipcPortEvent *)&v15);
    goto LABEL_14;
  }
  v5 = 4;
  SectionEvent = 0;
  v15 = 4;
LABEL_4:
  if ( v5 != 4 && a2 == *((void **)this + 4) )
  {
    SetEvent(*((HANDLE *)this + 4));
    v5 = v15;
  }
  if ( SectionEvent )
    return SectionEvent;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          SipcEndpoint::Disconnect(this);
          v10 = 0LL;
          goto LABEL_12;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v10 = 1LL;
LABEL_12:
          (*((void (__fastcall **)(SipcEndpoint *, __int64, _QWORD))this + 10))(this, v10, *((_QWORD *)this + 11));
          return 0LL;
        }
        if ( v9 == 1 )
        {
          v12 = &v18;
          if ( v16 != 2 )
            v12 = 0LL;
          (*((void (__fastcall **)(SipcEndpoint *, _QWORD, char *, char *, _QWORD))this + 9))(
            this,
            v16,
            v17,
            v12,
            *((_QWORD *)this + 11));
          v13 = *((_DWORD *)this + 16);
          if ( v13 && v16 )
          {
            v14 = v13 - 1;
            *((_DWORD *)this + 16) = v14;
            if ( !v14 )
              SipcPort::EnableSectionEvents(*((SipcPort **)this + 2));
          }
          return 0LL;
        }
      }
    }
  }
  return 2147549183LL;
}
