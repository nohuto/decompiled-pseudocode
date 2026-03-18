/*
 * XREFs of ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033B0AC
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x14033B6A0 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1403118E0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepCheckBitmapBits(
        struct XDCOBJ *a1,
        void *a2,
        struct _DEVBITMAPINFO *a3,
        void *a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+74h] [rbp-94h]
  _BYTE v15[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  HDC v17[18]; // [rsp+A8h] [rbp-60h] BYREF

  v9 = 0;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, a1, 0) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 3208) )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v15, a2);
        if ( v16 )
        {
          v12 = 0LL;
          v13 = 0;
          v14 = 0;
          SURFMEM::bCreateDIB((SURFMEM *)&v12, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( v12 )
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v10 + 3208))(
                   *(_QWORD *)(v10 + 1784),
                   *(_QWORD *)(v16 + 24),
                   (v12 + 24) & -(__int64)(v12 != 0),
                   a5);
          SURFMEM::~SURFMEM((SURFMEM *)&v12);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ(v17);
  return v9;
}
