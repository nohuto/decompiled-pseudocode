/*
 * XREFs of ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402782B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400564E4 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400590E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400648B4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

_QWORD *__fastcall DxgMonitor::EdidMonitorDescriptor::CopyInstance(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  DxgMonitor::EdidMonitorDescriptor *v6; // rax
  __int64 v7; // r9
  __int64 *v8; // rdi
  _QWORD *v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r9
  DxgMonitor::EdidMonitorDescriptor *v17; // rcx
  unsigned int v18; // esi
  __int64 *v19; // r14
  void **v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // r15
  void *v24; // [rsp+70h] [rbp+18h] BYREF
  DxgMonitor::EdidMonitorDescriptor *v25; // [rsp+78h] [rbp+20h] BYREF

  v6 = (DxgMonitor::EdidMonitorDescriptor *)operator new(0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = (__int64 *)v6;
  if ( !v6 )
  {
    *a2 = 0LL;
    return a2;
  }
  *((_QWORD *)v6 + 2) = 0LL;
  v25 = v6;
  *(_QWORD *)v6 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v9 = (_QWORD *)((char *)v6 + 24);
  *((_QWORD *)v6 + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  *((_QWORD *)v6 + 3) = 0LL;
  v10 = *(unsigned int *)(a1 + 16);
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
LABEL_11:
    v17 = (DxgMonitor::EdidMonitorDescriptor *)v8;
LABEL_12:
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v17, 1);
    return a2;
  }
  v18 = 0;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(a1 + 16);
  *((_DWORD *)v8 + 5) = *(_DWORD *)(a1 + 20);
  while ( v18 < *(_DWORD *)(a1 + 16) )
  {
    v19 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * v18);
    if ( v19 )
    {
      v20 = (void **)(*v9 + 8LL * v18);
      while ( v19 )
      {
        v21 = operator new(0x98uLL, 0x4D677844u, 256LL, v16);
        v22 = (_QWORD *)v21;
        if ( !v21 )
        {
          v24 = 0LL;
          *a2 = 0LL;
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
            &v24,
            0LL);
          goto LABEL_11;
        }
        memset((void *)(v21 + 24), 0, 0x80uLL);
        v24 = v22;
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[2] = 128LL;
        *((_DWORD *)v22 + 3) = *((_DWORD *)v19 + 3);
        *((_DWORD *)v22 + 2) = *((_DWORD *)v19 + 2);
        memmove(v22 + 3, v19 + 3, v19[2]);
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
          v20,
          &v24);
        v20 = (void **)*v20;
        v19 = (__int64 *)*v19;
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
          &v24,
          0LL);
      }
    }
    ++v18;
  }
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)a2,
    (__int64 *)&v25);
  v17 = v25;
  if ( v25 )
    goto LABEL_12;
  return a2;
}
