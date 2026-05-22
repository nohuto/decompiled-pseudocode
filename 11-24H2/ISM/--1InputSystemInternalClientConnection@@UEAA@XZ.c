/*
 * XREFs of ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x18012DC24
 * Callers:
 *     ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x18012DCA0 (--_GInputSystemInternalClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B0E98 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 */

void __fastcall InputSystemInternalClientConnection::~InputSystemInternalClientConnection(
        InputSystemInternalClientConnection *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v2,
      *((_QWORD *)this + 33));
    std::_Deallocate<16,0>(
      *((char **)this + 32),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFC0uLL));
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 31);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((InputSystemInternalClientConnection *)((char *)this + 8));
}
