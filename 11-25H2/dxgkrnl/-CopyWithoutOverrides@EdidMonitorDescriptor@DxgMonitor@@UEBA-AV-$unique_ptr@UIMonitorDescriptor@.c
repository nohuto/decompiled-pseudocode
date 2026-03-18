/*
 * XREFs of ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1403E2BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400590E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400648B4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

_QWORD *__fastcall DxgMonitor::EdidMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r14
  DxgMonitor::EdidMonitorDescriptor *v6; // rax
  __int64 v7; // r9
  __int64 *v8; // rdi
  _QWORD *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r9
  DxgMonitor::EdidMonitorDescriptor *v17; // rcx
  unsigned int i; // ebp
  __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  void ***v23; // rax
  void **v24; // rcx
  void **v25; // [rsp+20h] [rbp-48h]
  void ***v27; // [rsp+80h] [rbp+18h]
  DxgMonitor::EdidMonitorDescriptor *v28; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  v6 = (DxgMonitor::EdidMonitorDescriptor *)operator new(0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = (__int64 *)v6;
  if ( !v6 )
  {
    *a2 = 0LL;
    return a2;
  }
  *((_QWORD *)v6 + 2) = 0LL;
  v28 = v6;
  *(_QWORD *)v6 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v9 = (_QWORD *)((char *)v6 + 24);
  *((_QWORD *)v6 + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  *((_QWORD *)v6 + 3) = 0LL;
  v10 = *(unsigned int *)(v5 + 16);
  v11 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = operator new[](v13, 0x4D677844u, 256LL, v7);
  if ( v14 )
  {
    v15 = v14 + 8;
    *(_QWORD *)v14 = v10;
    `vector constructor iterator'(
      (char *)(v14 + 8),
      8LL,
      (unsigned int)v10,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
  }
  else
  {
    v15 = 0LL;
  }
  wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
    v8 + 3,
    v15);
  if ( !*v9 )
  {
    *a2 = 0LL;
LABEL_10:
    v17 = (DxgMonitor::EdidMonitorDescriptor *)v8;
LABEL_11:
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v17, 1);
    return a2;
  }
  for ( i = 0; i < *(_DWORD *)(v5 + 16); ++i )
  {
    v20 = *(__int64 **)(*(_QWORD *)(v5 + 24) + 8LL * i);
    if ( v20 )
    {
      v27 = (void ***)(*v9 + 8LL * i);
      while ( v20 )
      {
        if ( *((_DWORD *)v20 + 2) == 2 )
        {
          v21 = operator new(0x98uLL, 0x4D677844u, 256LL, v16);
          v22 = v21;
          if ( !v21 )
          {
            *a2 = 0LL;
            goto LABEL_10;
          }
          memset((void *)(v21 + 24), 0, 0x80uLL);
          *(_QWORD *)v22 = 0LL;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = 128LL;
          *(_DWORD *)(v22 + 12) = *((_DWORD *)v20 + 3);
          *(_DWORD *)(v22 + 8) = *((_DWORD *)v20 + 2);
          memmove((void *)(v22 + 24), v20 + 3, v20[2]);
          v23 = v27;
          v24 = *v27;
          *v27 = (void **)v22;
          v25 = v24;
          if ( v24 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              v24,
              0LL);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
            v23 = v27;
          }
          v27 = (void ***)*v23;
        }
        v20 = (__int64 *)*v20;
      }
      if ( *(_QWORD *)(*v9 + 8LL * i) )
        ++*((_DWORD *)v8 + 4);
    }
    v5 = a1;
  }
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)a2,
    (__int64 *)&v28);
  v17 = v28;
  if ( v28 )
    goto LABEL_11;
  return a2;
}
