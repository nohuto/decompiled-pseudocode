/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180018940
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C84C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001AA7C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18001B61C (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::operator=(ATL::CSid *this, struct _SID *a2)
{
  if ( !*((_BYTE *)this + 76) || (struct _SID *)((char *)this + 8) != a2 )
  {
    *((_DWORD *)this + 20) = 7;
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 88);
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 96);
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 104);
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 112);
    *((_BYTE *)this + 76) = 0;
    ATL::CSid::Copy(this, a2);
    *((_DWORD *)this + 20) = 8;
  }
  return this;
}
