/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x140210D30
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x14026DA08 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1402C85D0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x140063770 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x14026A9BC (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebp
  int v6; // ebx
  unsigned __int64 v7; // rdx
  CWindowProp *v8; // rdi
  int v9; // esi
  CWindowProp *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a3;
  v6 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, (__int64 *)&v11)
    || (v6 = CWindowProp::CreateWindowProp<CoreWindowProp>(&v11), v6 < 0) )
  {
    v8 = v11;
  }
  else
  {
    v7 = a1;
    v8 = v11;
    if ( !(unsigned int)CWindowProp::SetProp(v11, v7) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
      return (unsigned int)-1073741790;
    }
  }
  if ( v6 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *((_DWORD *)v8 + 6) = v4;
      }
      else
      {
        UserSetLastError(87);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v8 + 7) = v4;
    }
  }
  return (unsigned int)v6;
}
