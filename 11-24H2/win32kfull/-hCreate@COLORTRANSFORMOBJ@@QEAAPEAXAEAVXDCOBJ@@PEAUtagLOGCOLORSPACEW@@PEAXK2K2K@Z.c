/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14032F900
 * Callers:
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033B214 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x140196FB8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14032F758 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r15
  __int64 v15; // rbx
  struct OBJECT *Object; // rbp
  __int64 v17; // r8
  __int64 (__fastcall *v18)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // r10
  __int64 v19; // rbx
  struct HOBJ__ **v20; // rax
  _BYTE v22[48]; // [rsp+50h] [rbp-E8h] BYREF
  HDC v23[18]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+148h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v24 = v15;
  if ( v15 )
  {
    Object = (struct OBJECT *)AllocateObject(32LL, 14LL);
    if ( Object )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      LOBYTE(v17) = 1;
      v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, Object, v17, 0, 14);
      if ( v9 )
      {
        *((_QWORD *)this + 4) = Object;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v24);
        v18 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3192);
        if ( v18 )
        {
          v19 = v18(*(_QWORD *)(v15 + 1784), a3, a4, a5, a6, a7, a8, a9, 0);
          v10 = v19;
          if ( v19 )
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v19;
            v20 = (struct HOBJ__ **)Win32AllocPoolZInit(16LL, 1650745671LL);
            if ( v20 )
            {
              *v20 = v9;
              v20[1] = *(struct HOBJ__ **)(*(_QWORD *)a2 + 2080LL);
              *(_QWORD *)(*(_QWORD *)a2 + 2080LL) = v20;
            }
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v23);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      if ( v9 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
          COLORTRANSFORMOBJ::bDelete(this, a2);
          return 0LL;
        }
      }
      else
      {
        FreeObject(Object, 14LL);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
