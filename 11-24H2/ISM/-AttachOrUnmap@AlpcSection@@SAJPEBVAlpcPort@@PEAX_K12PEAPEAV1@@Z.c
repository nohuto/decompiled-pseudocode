/*
 * XREFs of ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010D878
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E740 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010D654 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x180110514 (-SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z.c)
 *     ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x180110628 (-SendXvmmDisconnect@AlpcSection@@CAJ_K@Z.c)
 *     ?Unmap@AlpcSection@@CAJPEAX00@Z @ 0x180110818 (-Unmap@AlpcSection@@CAJPEAX00@Z.c)
 *     SipcFailFast @ 0x1801108AC (SipcFailFast.c)
 */

__int64 __fastcall AlpcSection::AttachOrUnmap(
        const struct AlpcPort *a1,
        char *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        struct AlpcSection **a6)
{
  int v8; // edi
  int v9; // eax
  int v10; // eax
  _OWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  v8 = AlpcSection::Attach(a1, a2, a3, a4, a5, (struct SipcSectionId *)v12, a6);
  if ( v8 < 0 )
  {
    v9 = AlpcSection::SendXvmmDisconnect(a5);
    if ( v9 < 0 )
    {
      SipcFailFast((unsigned int)v9);
      __debugbreak();
    }
    AlpcSection::SendAlpcDisconnect(a4, (const struct SipcSectionId *)v12);
    v10 = AlpcSection::Unmap(a2, a4, 0LL);
    if ( v10 < 0 )
    {
      SipcFailFast((unsigned int)v10);
      __debugbreak();
    }
  }
  return (unsigned int)v8;
}
