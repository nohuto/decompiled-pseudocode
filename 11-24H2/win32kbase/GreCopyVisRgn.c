/*
 * XREFs of GreCopyVisRgn @ 0x140179AC0
 * Callers:
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  const struct REGION_CORE *v4; // r8
  const struct REGION_CORE *v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-49h]
  char v8; // [rsp+28h] [rbp-41h]
  _QWORD v9[8]; // [rsp+30h] [rbp-39h] BYREF
  DC *v10[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v11; // [rsp+E0h] [rbp+77h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v10, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 0, 0);
  if ( v10[0] && v9[0] )
  {
    DC::AcquireDcVisRgnShared(v10[0]);
    v11 = *((_QWORD *)v10[0] + 142);
    if ( v11 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v9, (struct RGNOBJ *)&v11, v4) )
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v9, v5);
    if ( v8 )
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  DCOBJA::~DCOBJA((DCOBJA *)v10);
  return v3;
}
