/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1402616D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D8650 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x14026B8E0 (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL a1, __int64 a2, int a3, int a4, PVOID Address)
{
  __int64 v6; // r12
  struct _GRETHREAD *CurrentThread; // rax
  HBITMAP Bitmap; // r14
  void *v10; // rdi
  BOOL v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  FLONG v19; // esi
  HANDLE v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  _BYTE v26[32]; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-B0h]
  struct W32_PUSH_LOCK *v28[21]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int cy; // [rsp+124h] [rbp+Ch]
  LONG lWidth; // [rsp+128h] [rbp+10h]

  lWidth = a2;
  cy = a1.cy;
  v6 = (unsigned int)a2;
  CurrentThread = GreGetCurrentThread(*(_QWORD *)&a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v28, CurrentThread);
  Bitmap = 0LL;
  v10 = 0LL;
  v11 = 1;
  if ( (unsigned int)ValidUmpdSizl(a1, 1) && (v14 = v6 * cy, v14 <= 0xFFFFFFFF) )
  {
    v15 = v6 * cy;
    if ( UmpdSecurityGateNoUmpdObj(v14, v12, v13) && (a4 & 0x80u) != 0 )
      a4 &= ~0x80u;
    if ( Address )
    {
      v19 = a4 & 0xFFFFFFF7;
      if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
        v20 = GrepSecureVirtualMemory(Address, v15, 4u);
      else
        v20 = MmSecureVirtualMemory(Address, v15, 4u);
      v10 = v20;
      v11 = v20 != 0LL;
      v21 = a3;
    }
    else
    {
      if ( UmpdSecurityGateNoUmpdObj(v17, v16, v18)
        && a3 != 1
        && a3 != 2
        && a3 != 3
        && a3 != 4
        && (unsigned int)(a3 - 5) >= 2 )
      {
        v11 = 0;
      }
      v19 = a4 | 8;
      v24 = *((_QWORD *)GreGetCurrentThread(v23, v22) + 8) == 0LL;
      v21 = a3;
      if ( !v24 )
        v19 |= 0x80u;
    }
    if ( v11 )
      Bitmap = EngCreateBitmap(a1, lWidth, v21 | 0x8000u, v19, Address);
    if ( v10 )
    {
      if ( Bitmap )
      {
        SURFREF::SURFREF((SURFREF *)v26, (HSURF)Bitmap);
        if ( v27 )
        {
          *(_QWORD *)(v27 + 144) = v10;
        }
        else
        {
          if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
            GrepUnsecureVirtualMemory(v10);
          else
            MmUnsecureVirtualMemory(v10);
          EngDeleteSurface((HSURF)Bitmap);
          Bitmap = 0LL;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
      }
      else if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      {
        GrepUnsecureVirtualMemory(v10);
      }
      else
      {
        MmUnsecureVirtualMemory(v10);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v28);
    return Bitmap;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v28);
    return 0LL;
  }
}
