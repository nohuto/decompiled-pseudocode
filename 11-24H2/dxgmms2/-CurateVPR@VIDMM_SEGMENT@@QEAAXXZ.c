/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400EB6B4
 * Callers:
 *     ?CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB61C (-CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0phhhqqx_EtwWriteTransfer @ 0x14004D928 (McTemplateK0phhhqqx_EtwWriteTransfer.c)
 *     McTemplateK0phhhxxqqx_EtwWriteTransfer @ 0x14004D9F4 (McTemplateK0phhhxxqqx_EtwWriteTransfer.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400960E0 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAV.c)
 *     Percentagex100 @ 0x14009E840 (Percentagex100.c)
 *     ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x14010C2B4 (-CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  unsigned __int64 *v2; // r15
  __int64 *v3; // r12
  _WORD *v4; // rdi
  VIDMM_GLOBAL **v5; // r14
  VIDMM_LINEAR_POOL **v6; // r13
  unsigned __int16 v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rdx
  unsigned int v18; // r9d
  __int16 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int16 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+28h] [rbp-70h]
  unsigned __int16 v27; // [rsp+28h] [rbp-70h]

  if ( !*((_BYTE *)this + 488) )
  {
    *((_BYTE *)this + 488) = 1;
    v2 = (unsigned __int64 *)((char *)this + 472);
    v3 = (__int64 *)((char *)this + 480);
    v4 = (_WORD *)((char *)this + 420);
    v5 = (VIDMM_GLOBAL **)((char *)this + 24);
    v6 = (VIDMM_LINEAR_POOL **)((char *)this + 208);
    if ( (byte_140081241 & 0x20) != 0 )
    {
      VIDMM_LINEAR_POOL::CalculateCapacity(*v6);
      v7 = VIDMM_SEGMENT::DriverId(this);
      Percentagex100(*v3, *v2);
      Percentagex100((unsigned int)dword_1400815F4, (unsigned int)dword_1400815F8);
      v4 = (_WORD *)((char *)this + 420);
      v27 = v7;
      v25 = *((_WORD *)this + 210);
      McTemplateK0phhhxxqqx_EtwWriteTransfer(v9, v8, v10, *((_QWORD *)*v5 + 3), v25, v27);
    }
    v11 = *v2;
    v12 = *v3;
    if ( *v3 < v11 * (unsigned int)dword_1400815F4 / (unsigned int)dword_1400815F8 )
    {
      v13 = VIDMM_LINEAR_POOL::CalculateCapacity(*v6);
      v15 = v11 - v12;
      v16 = dword_140081600;
      v17 = (unsigned int)dword_1400815FC * v15 % (unsigned int)dword_140081600;
      if ( v13 < (unsigned int)dword_1400815FC * v15 / (unsigned int)dword_140081600 )
      {
        if ( (byte_140081241 & 0x20) != 0 )
        {
          VIDMM_SEGMENT::DriverId(this);
          Percentagex100(v13, v15);
          Percentagex100(v18, v16);
          LOWORD(v26) = v19;
          LOWORD(v24) = *v4;
          McTemplateK0phhhqqx_EtwWriteTransfer(v21, v20, v22, *((_QWORD *)*v5 + 3), v24, v26);
        }
        v23 = VIDMM_GLOBAL::PrepareMoveResources(*v5, v17, v14, (__int64)this);
        if ( v23 < 0 )
        {
          WdLogSingleEntry3(3LL, v23, 0LL, 0LL);
          WdLogGlobalForLineNumber = 6481;
        }
      }
    }
  }
}
