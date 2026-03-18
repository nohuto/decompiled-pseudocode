/*
 * XREFs of ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x180278700
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18027A910 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::CancelBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rdx
  const char *v10; // r9
  unsigned int v11; // r11d
  struct Microsoft::BamoImpl::BufferStream *v12; // rbx
  void ***i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v16; // [rsp+50h] [rbp+8h] BYREF

  v8 = *a2;
  v16 = 0LL;
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    v8,
    &v16);
  v12 = v16;
  if ( !v16 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x11B,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v10);
  for ( i = *(void ****)v16; ; ++i )
  {
    if ( i == *((void ****)v16 + 1) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
        v10);
    if ( **i == a4 )
      break;
    ++v11;
  }
  memmove_0(
    (void *)(*(_QWORD *)v16 + 8LL * v11),
    (const void *)(*(_QWORD *)v16 + 8LL * v11 + 8),
    *((_QWORD *)v16 + 1) - (*(_QWORD *)v16 + 8LL * v11 + 8));
  *((_QWORD *)v12 + 1) -= 8LL;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, void *, unsigned int))(**((_QWORD **)this + 1)
                                                                                             + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}
