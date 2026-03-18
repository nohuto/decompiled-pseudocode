/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001CA10
 * Callers:
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C5DA4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     EngCreatePalette @ 0x1400C5F20 (EngCreatePalette.c)
 *     GreCreatePalette @ 0x14019AB40 (GreCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C5D14 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 * Callees:
 *     XEPALOBJ_FreePaletteMemory @ 0x14001A750 (XEPALOBJ_FreePaletteMemory.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDE0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // edi
  __int64 v18; // rcx
  PVOID v19; // rax
  __int64 UserSessionState; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // r8
  int j; // edx
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // r9d
  unsigned int v32; // eax
  _DWORD *v33; // r10
  int k; // edx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // r8d
  _DWORD *v40; // r9
  int m; // edx
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  int v46; // esi
  int v47; // r8d
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 inserted; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  char *v57; // rcx
  void *v58; // rdi
  __int64 v59; // rbx
  _DWORD *v60; // rdx
  int v61; // r13d
  _DWORD *v62; // r9
  const unsigned int *v63; // rcx
  _QWORD *Pool2; // rax
  unsigned int n; // r8d
  int v66; // eax
  unsigned __int64 v67; // rdx
  _DWORD *i; // rax
  int v69; // r13d
  unsigned __int64 Buffer; // [rsp+20h] [rbp-138h]
  PVOID Buffera; // [rsp+20h] [rbp-138h]
  __int64 Bufferb; // [rsp+20h] [rbp-138h]
  unsigned __int64 v73; // [rsp+28h] [rbp-130h]
  __int64 v74; // [rsp+48h] [rbp-110h]
  _BYTE v75[32]; // [rsp+50h] [rbp-108h] BYREF
  __int64 v76; // [rsp+70h] [rbp-E8h]
  _DWORD *v77; // [rsp+78h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+80h] [rbp-D8h] BYREF
  char v79; // [rsp+168h] [rbp+10h]
  unsigned int v80; // [rsp+170h] [rbp+18h]

  v80 = a3;
  v12 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v74 = v12;
  v13 = 4;
  if ( a2 == 16 )
    goto LABEL_2;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v14 = a8 & 0x3100300;
      v80 = 0;
      v15 = a5;
      if ( !a5 )
        return 0LL;
      v17 = a7;
      if ( !a7 )
        return 0LL;
      v16 = a6;
      if ( !a6 )
        return 0LL;
      v13 = 52;
      goto LABEL_4;
    }
    if ( a2 != 4 && a2 != 8 )
      return 0LL;
LABEL_2:
    v14 = a8 & 0x3100100 | 0x200;
    v80 = 0;
    if ( a2 == 16 )
    {
LABEL_3:
      v15 = a5;
      v16 = a6;
      v17 = a7;
      goto LABEL_4;
    }
    if ( a2 == 4 )
    {
      v15 = 255;
      v16 = 65280;
      v17 = 16711680;
    }
    else
    {
      v15 = 16711680;
      v16 = 65280;
      v17 = 255;
    }
    v13 = 52;
LABEL_4:
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v12) + 88) + 4272LL) + 8LL);
    if ( v18 )
      v19 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v18 + 48));
    else
      v19 = 0LL;
    *(_QWORD *)this = v19;
    if ( !v19 )
      return 0LL;
    if ( v13 )
    {
      UserSessionState = W32GetUserSessionState();
      v21 = v13;
      Buffer = v13;
      v22 = UserSessionState + 72288;
      v23 = *(_DWORD *)(UserSessionState + 72288);
      switch ( v23 )
      {
        case 0:
          goto LABEL_9;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                 (NSInstrumentation::CLeakTrackingAllocator *)v22,
                 0x6C706147u)
            && Buffer + 16 >= Buffer )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(256LL, Buffer + 16, 1819304263LL);
            Buffera = Pool2;
            if ( !Pool2
              || (_InterlockedIncrement64((volatile signed __int64 *)(v22 + 112)),
                  *Pool2 = 1819304263LL,
                  v24 = (__int64)(Pool2 + 2),
                  Buffera = Pool2 + 2,
                  Pool2 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *(NSInstrumentation::CPointerHashTable **)(v22 + 8),
                (const void *)0x6C706147);
              v24 = (__int64)Buffera;
            }
            goto LABEL_11;
          }
          break;
        case 2:
          if ( (*(_DWORD *)(v22 + 80) & 0x6C706147) != 0x6C706147 )
          {
LABEL_9:
            v24 = ExAllocatePool2(256LL, v21, 1819304263LL);
            if ( v24 )
              _InterlockedIncrement64((volatile signed __int64 *)(v22 + 112));
            goto LABEL_11;
          }
          v67 = 0LL;
          for ( i = (_DWORD *)(v22 + 48); ; ++i )
          {
            v73 = v67;
            if ( v67 >= *(unsigned int *)(v22 + 84) )
              goto LABEL_9;
            if ( *i == 1819304263 )
              break;
            ++v67;
          }
          v79 = 0;
          if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
          {
            v79 = 1;
            v21 += 16LL;
          }
          Bufferb = ExAllocatePool2(256LL, v21, 1819304263LL);
          if ( Bufferb )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v22 + 128));
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v79 && (unsigned __int64)(Bufferb & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v22,
                                      Bufferb,
                                      v73,
                                      BackTrace) )
              {
                v24 = Bufferb + 16;
                goto LABEL_11;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v22,
                                         Bufferb,
                                         v73,
                                         BackTrace) )
            {
              v24 = Bufferb;
              goto LABEL_11;
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v22 + 136));
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Bufferb);
          }
          break;
      }
    }
    v24 = 0LL;
LABEL_11:
    *(_QWORD *)(*(_QWORD *)this + 128LL) = v24;
    if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 24LL) = v14 | a2;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = v80;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = _InterlockedIncrement((volatile signed __int32 *)(v74 + 3672));
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 56LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)this + 128LL);
      if ( a2 == 8 )
      {
LABEL_13:
        **(_DWORD **)(*(_QWORD *)this + 112LL) = v15;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL) = v16;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL) = v17;
        if ( v15 == 255 && v16 == 65280 && v17 == 16711680 )
        {
          *(_DWORD *)(*(_QWORD *)this + 24LL) |= 4u;
        }
        else if ( v15 == 63488 && v16 == 2016 && v17 == 31 )
        {
          *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x400000u;
        }
        else if ( v15 == 31744 && v16 == 992 && v17 == 31 )
        {
          *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x200000u;
        }
        v25 = *(_DWORD **)(*(_QWORD *)this + 112LL);
        for ( j = 0; (v15 & 1) == 0; ++j )
          v15 >>= 1;
        v27 = j;
        do
        {
          v28 = v27;
          v15 >>= 1;
          ++v27;
        }
        while ( (v15 & 1) != 0 );
        v29 = v27 - j;
        v25[9] = v29;
        v30 = v28 - 7;
        if ( v29 <= 8 )
          v30 = j;
        v25[6] = v30;
        v31 = 8;
        if ( v29 > 8 )
          v32 = 0;
        else
          v32 = 8 - v29;
        v25[3] = v32;
        v33 = *(_DWORD **)(*(_QWORD *)this + 112LL);
        for ( k = 0; (v16 & 1) == 0; ++k )
          v16 >>= 1;
        v35 = k;
        do
        {
          v36 = v35;
          v16 >>= 1;
          ++v35;
        }
        while ( (v16 & 1) != 0 );
        v37 = v35 - k;
        v33[10] = v37;
        v38 = v36 - 7;
        if ( v37 <= 8 )
          v38 = k;
        v33[7] = v38;
        v39 = 16;
        if ( v37 <= 8 )
          v31 = 16 - v37;
        v33[4] = v31;
        v40 = *(_DWORD **)(*(_QWORD *)this + 112LL);
        for ( m = 0; (v17 & 1) == 0; ++m )
          v17 >>= 1;
        v42 = m;
        do
        {
          v43 = v42;
          v17 >>= 1;
          ++v42;
        }
        while ( (v17 & 1) != 0 );
        v44 = v42 - m;
        v40[11] = v44;
        v45 = v43 - 7;
        if ( v44 <= 8 )
          v45 = m;
        v40[8] = v45;
        if ( v44 <= 8 )
          v39 = 24 - v44;
        v40[5] = v39;
        goto LABEL_41;
      }
      v61 = a2 - 1;
      if ( v61 )
      {
        v69 = v61 - 1;
        if ( !v69 || v69 == 2 )
          goto LABEL_13;
      }
      else
      {
        v62 = *(_DWORD **)(*(_QWORD *)this + 112LL);
        v63 = a4;
        if ( a4 )
        {
          for ( n = 0; n < v80; ++n )
          {
            v66 = *v63++;
            *v62++ = v66;
            v77 = v62;
          }
          v47 = 4;
          v46 = a9;
LABEL_42:
          v48 = *(_QWORD *)this;
          if ( *(_DWORD *)(*(_QWORD *)this + 28LL) )
          {
            v50 = 2;
            v47 = 1;
            goto LABEL_47;
          }
          v49 = *(_DWORD *)(v48 + 24);
          if ( (v49 & 2) == 0 )
          {
            if ( (v49 & 8) != 0 )
              v47 = 6;
            else
              v47 = 8 - ((v49 & 0x10) != 0);
            goto LABEL_46;
          }
          v60 = *(_DWORD **)(v48 + 112);
          if ( v60[2] == 31 )
          {
            if ( v60[1] == 2016 && *v60 == 63488 )
            {
              v47 = 3;
              goto LABEL_46;
            }
            if ( v60[1] == 992 && *v60 == 31744 )
              goto LABEL_46;
          }
          v47 = 5;
LABEL_46:
          v50 = v47;
LABEL_47:
          *(_DWORD *)(v48 + 100) = v47;
          *(_DWORD *)(*(_QWORD *)this + 96LL) = v50;
          HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v75);
          v52 = *(_QWORD *)this;
          inserted = 0LL;
          if ( !v76 )
          {
            v54 = 11LL;
            if ( !v46 )
              v54 = 3LL;
            LOBYTE(v51) = 8;
            inserted = HmgInsertObjectInternal(*(_QWORD *)this, v54, v51);
            v55 = v76;
            if ( inserted )
              v55 = v52;
            v76 = v55;
          }
          if ( inserted )
          {
            HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v75);
            return 1LL;
          }
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v75);
          v57 = *(char **)(*(_QWORD *)this + 128LL);
          if ( v57 )
            GreDeleteFastMutex(v57);
          v58 = *(void **)this;
          v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v57) + 88) + 4272LL) + 8LL);
          if ( v59 )
          {
            memset(v58, 0, 0x90uLL);
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v59 + 48), v58);
          }
          *(_QWORD *)this = 0LL;
          return 0LL;
        }
        if ( v80 )
          memset(*(void **)(*(_QWORD *)this + 112LL), 0, 4LL * v80);
      }
LABEL_41:
      v46 = a9;
      v47 = 4;
      goto LABEL_42;
    }
    XEPALOBJ_FreePaletteMemory((__int64)this);
    return 0LL;
  }
  v13 = 4 * a3 + 4;
  v14 = a8 & 0x3102F00;
  if ( a3 )
    goto LABEL_3;
  return 0LL;
}
