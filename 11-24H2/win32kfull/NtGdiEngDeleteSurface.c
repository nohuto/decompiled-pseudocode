/*
 * XREFs of NtGdiEngDeleteSurface @ 0x140261B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  void *v6; // rcx
  int v7; // edi
  _BYTE v9[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-88h]
  struct W32_PUSH_LOCK *v11[14]; // [rsp+50h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  SURFREF::SURFREF((SURFREF *)v9, a1);
  v4 = 1;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x40000) != 0 )
  {
    if ( *(_QWORD *)(v10 + 144) )
    {
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline();
      v6 = *(void **)(v10 + 144);
      if ( IsEnabledDeviceUsageNoInline )
        GrepUnsecureVirtualMemory(v6);
      else
        MmUnsecureVirtualMemory(v6);
      *(_QWORD *)(v10 + 144) = 0LL;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v9);
  if ( !v7 || !EngDeleteSurface(a1) )
    v4 = 0;
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
  return v4;
}
