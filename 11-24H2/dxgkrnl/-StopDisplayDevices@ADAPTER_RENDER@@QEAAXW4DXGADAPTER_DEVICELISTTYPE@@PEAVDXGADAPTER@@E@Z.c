/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019FE68
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x14019D000 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x14019D160 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14019A5A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401BB7FC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  __int64 v6; // r14
  struct DXGDEVICE **v7; // r14
  struct DXGDEVICE *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // ebp
  _BYTE v13[160]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = a4;
  v6 = 160LL;
  if ( a2 != 1 )
    v6 = 144LL;
  v7 = (struct DXGDEVICE **)(a1 + v6);
  for ( i = *v7; i != (struct DXGDEVICE *)v7 && i; i = *(struct DXGDEVICE **)i )
  {
    if ( !a3 || a3 == *((_QWORD *)i + 237) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v13, (__int64)i, 2, a4, 0);
      if ( v4 || (int)COREDEVICEACCESS::AcquireExclusive((__int64)v13, 1u) >= 0 )
      {
        v9 = *((_QWORD *)i + 237);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 3120);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 96);
          if ( v12 )
          {
            do
            {
              if ( i == ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v10, v11) )
                ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v10, i);
              ++v11;
            }
            while ( v11 < v12 );
          }
        }
        DXGDEVICE::Reset(i, 0);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v13);
    }
  }
}
