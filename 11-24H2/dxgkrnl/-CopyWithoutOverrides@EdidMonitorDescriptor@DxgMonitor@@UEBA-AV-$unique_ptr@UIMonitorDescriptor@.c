/*
 * XREFs of ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1403D9730
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140058BA0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14005983C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400644D4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

_QWORD *__fastcall DxgMonitor::EdidMonitorDescriptor::CopyWithoutOverrides(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  DxgMonitor::EdidMonitorDescriptor *v4; // rax
  __int64 *v5; // rdi
  _QWORD *v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  DxgMonitor::EdidMonitorDescriptor *v13; // rcx
  unsigned int i; // ebp
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r15
  void ***v19; // rax
  void **v20; // rcx
  void **v21; // [rsp+20h] [rbp-48h]
  void ***v23; // [rsp+80h] [rbp+18h]
  DxgMonitor::EdidMonitorDescriptor *v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (DxgMonitor::EdidMonitorDescriptor *)operator new(0x20uLL, 0x4D677844u, 256LL);
  v5 = (__int64 *)v4;
  if ( !v4 )
  {
    *a2 = 0LL;
    return a2;
  }
  *((_QWORD *)v4 + 2) = 0LL;
  v24 = v4;
  *(_QWORD *)v4 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v6 = (_QWORD *)((char *)v4 + 24);
  *((_QWORD *)v4 + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  *((_QWORD *)v4 + 3) = 0LL;
  v7 = *(unsigned int *)(v3 + 16);
  v8 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v8 = -1LL;
  v9 = __CFADD__(v8, 8LL);
  v10 = v8 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = operator new[](v10, 0x4D677844u, 256LL);
  if ( v11 )
  {
    v12 = v11 + 8;
    *(_QWORD *)v11 = v7;
    `vector constructor iterator'(
      (char *)(v11 + 8),
      8LL,
      (unsigned int)v7,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
  }
  else
  {
    v12 = 0LL;
  }
  wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
    v5 + 3,
    v12);
  if ( !*v6 )
  {
    *a2 = 0LL;
LABEL_10:
    v13 = (DxgMonitor::EdidMonitorDescriptor *)v5;
LABEL_11:
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v13, 1);
    return a2;
  }
  for ( i = 0; i < *(_DWORD *)(v3 + 16); ++i )
  {
    v16 = *(__int64 **)(*(_QWORD *)(v3 + 24) + 8LL * i);
    if ( v16 )
    {
      v23 = (void ***)(*v6 + 8LL * i);
      while ( v16 )
      {
        if ( *((_DWORD *)v16 + 2) == 2 )
        {
          v17 = operator new(0x98uLL, 0x4D677844u, 256LL);
          v18 = v17;
          if ( !v17 )
          {
            *a2 = 0LL;
            goto LABEL_10;
          }
          memset((void *)(v17 + 24), 0, 0x80uLL);
          *(_QWORD *)v18 = 0LL;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = 128LL;
          *(_DWORD *)(v18 + 12) = *((_DWORD *)v16 + 3);
          *(_DWORD *)(v18 + 8) = *((_DWORD *)v16 + 2);
          memmove((void *)(v18 + 24), v16 + 3, v16[2]);
          v19 = v23;
          v20 = *v23;
          *v23 = (void **)v18;
          v21 = v20;
          if ( v20 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              v20,
              0LL);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
            v19 = v23;
          }
          v23 = (void ***)*v19;
        }
        v16 = (__int64 *)*v16;
      }
      if ( *(_QWORD *)(*v6 + 8LL * i) )
        ++*((_DWORD *)v5 + 4);
    }
    v3 = a1;
  }
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)a2,
    (__int64 *)&v24);
  v13 = v24;
  if ( v24 )
    goto LABEL_11;
  return a2;
}
