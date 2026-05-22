/*
 * XREFs of ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004A730
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180049B68 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004A18C (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x18009B844 (wil--details--lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___--_lambda_call__lambda_9f35.c)
 *     ?OnFinalRelease@RIMDeviceCollection@@MEAAXXZ @ 0x1800D3B00 (-OnFinalRelease@RIMDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D40C0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D7C60 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008221C (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RIMDeviceCollection::Close(HANDLE *this)
{
  struct RIMDevice **v2; // rdi
  __int64 v3; // rsi
  HANDLE v4; // rcx
  HANDLE v5; // rcx
  HANDLE v6; // rcx
  HANDLE v7; // rcx
  HANDLE v8; // rcx
  const struct std::nothrow_t *v9; // rdx
  HANDLE v10; // rcx

  v2 = (struct RIMDevice **)(this + 78);
  v3 = 256LL;
  do
  {
    if ( *v2 )
      RIMDeviceCollection::DetachDevice((RIMDeviceCollection *)this, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = this[5];
  if ( v4 )
  {
    CloseHandle(v4);
    this[5] = 0LL;
  }
  v5 = this[6];
  if ( v5 )
  {
    CloseHandle(v5);
    this[6] = 0LL;
  }
  v6 = this[7];
  if ( v6 )
  {
    CloseHandle(v6);
    this[7] = 0LL;
  }
  v7 = this[8];
  if ( v7 )
  {
    CloseHandle(v7);
    this[8] = 0LL;
  }
  v8 = this[9];
  if ( v8 )
  {
    CloseHandle(v8);
    this[9] = 0LL;
  }
  v9 = (const struct std::nothrow_t *)this[337];
  if ( v9 && v9 != this[335] )
  {
    RIMFreeInputBuffer(this[10]);
    this[337] = 0LL;
  }
  v10 = this[335];
  if ( v10 )
  {
    operator delete(v10, v9);
    this[335] = 0LL;
    *((_DWORD *)this + 672) = 0;
  }
  if ( this[10] != (HANDLE)-1LL )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  this[2] = 0LL;
  this[3] = 0LL;
}
