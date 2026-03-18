/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C003E800
 * Callers:
 *     EngCreatePalette @ 0x1C0090E40 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016C39C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C016C6B0 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C016CCCC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02DBCC4 (bInitPALOBJ.c)
 * Callees:
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00384D8 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A28 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
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
  unsigned __int64 v13; // r12
  struct HOBJ__ *inserted; // r13
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  __int64 v18; // rcx
  PVOID v19; // rax
  NSInstrumentation::CLeakTrackingAllocator *v20; // r13
  int v21; // eax
  __int64 Pool2; // r12
  _DWORD *v23; // r8
  int i; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // edx
  unsigned int v29; // eax
  _DWORD *v30; // r9
  int j; // ecx
  int v32; // eax
  int v33; // r8d
  unsigned int v34; // eax
  int v35; // ecx
  _DWORD *v36; // r8
  int k; // r9d
  int v38; // eax
  int v39; // edx
  unsigned int v40; // eax
  int v41; // r8d
  int v42; // r14d
  __int64 v43; // rax
  int v44; // ecx
  _DWORD *v45; // rdx
  int v46; // ecx
  __int64 v47; // rbx
  unsigned int v48; // edx
  int v50; // r15d
  int v51; // r15d
  _DWORD *v52; // rcx
  const unsigned int *v53; // r8
  unsigned int n; // eax
  unsigned int m; // edx
  int v56; // eax
  _QWORD *v57; // rax
  unsigned int v58; // edx
  unsigned int v59; // [rsp+20h] [rbp-158h]
  _DWORD v60[4]; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-140h] BYREF
  __int64 v62; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-130h] BYREF
  __int64 v64; // [rsp+50h] [rbp-128h]
  _QWORD v65[3]; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v66[32]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v67; // [rsp+98h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+A0h] [rbp-D8h] BYREF
  char v69; // [rsp+188h] [rbp+10h]
  unsigned int v70; // [rsp+190h] [rbp+18h]

  v70 = a3;
  v60[3] = a9;
  v12 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v64 = v12;
  v13 = 4LL;
  if ( a2 == 2 )
  {
    v59 = a8 & 0x3100300;
    inserted = 0LL;
    v70 = 0;
    v15 = a5;
    if ( !a5 )
      return 0LL;
    v16 = a7;
    if ( !a7 )
      return 0LL;
    v17 = a6;
    if ( !a6 )
      return 0LL;
    goto LABEL_5;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 4 && a2 != 8 && a2 != 16 )
      return 0LL;
    v59 = a8 & 0x3100100 | 0x200;
    inserted = 0LL;
    v70 = 0;
    if ( a2 != 16 )
    {
      if ( a2 == 4 )
      {
        v15 = 255;
        v17 = 65280;
        v16 = 16711680;
      }
      else
      {
        v15 = 16711680;
        v17 = 65280;
        v16 = 255;
      }
LABEL_5:
      v13 = 52LL;
      goto LABEL_6;
    }
LABEL_75:
    v16 = a7;
    v17 = a6;
    v15 = a5;
LABEL_6:
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 24) + 6504LL) + 8LL);
    if ( v18 )
      v19 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v18 + 48));
    else
      v19 = 0LL;
    *(_QWORD *)this = v19;
    if ( !v19 )
      return 0LL;
    if ( (_DWORD)v13 )
    {
      v60[0] = 1819304263;
      v62 = 260LL;
      v20 = gpLeakTrackingAllocator;
      v63 = v13;
      v21 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, v13, 1819304263LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
        goto LABEL_13;
      }
      if ( v21 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6C706147u)
          && v13 + 16 >= v13 )
        {
          v57 = (_QWORD *)ExAllocatePool2(v62 & 0xFFFFFFFFFFFFFFFDuLL, v13 + 16, v60[0]);
          Pool2 = (__int64)v57;
          if ( v57 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
            *v57 = 1819304263LL;
            Pool2 = (__int64)(v57 + 2);
            if ( v57 != (_QWORD *)-16LL )
            {
LABEL_13:
              inserted = 0LL;
              goto LABEL_14;
            }
          }
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v20 + 1),
            (const void *)0x6C706147);
          inserted = 0LL;
LABEL_14:
          *(_QWORD *)(*(_QWORD *)this + 128LL) = Pool2;
          if ( !*(_QWORD *)(*(_QWORD *)this + 128LL) )
          {
LABEL_125:
            XEPALOBJ::FreePaletteMemory(this);
            return 0LL;
          }
          *(_DWORD *)(*(_QWORD *)this + 24LL) = v59 | a2;
          *(_DWORD *)(*(_QWORD *)this + 28LL) = v70;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = _InterlockedIncrement((volatile signed __int32 *)(v64 + 3848));
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
          if ( a2 == 2 )
            goto LABEL_16;
          v50 = a2 - 1;
          if ( v50 )
          {
            v51 = v50 - 3;
            if ( !v51 || v51 == 4 )
            {
LABEL_16:
              **(_DWORD **)(*(_QWORD *)this + 112LL) = v15;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL) = v17;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL) = v16;
              if ( v15 == 255 && v17 == 65280 && v16 == 16711680 )
              {
                *(_DWORD *)(*(_QWORD *)this + 24LL) |= 4u;
              }
              else if ( v15 == 63488 && v17 == 2016 && v16 == 31 )
              {
                *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x400000u;
              }
              else if ( v15 == 31744 && v17 == 992 && v16 == 31 )
              {
                *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x200000u;
              }
              v23 = *(_DWORD **)(*(_QWORD *)this + 112LL);
              for ( i = 0; (v15 & 1) == 0; ++i )
                v15 >>= 1;
              v25 = i;
              do
              {
                v26 = v25;
                v15 >>= 1;
                ++v25;
              }
              while ( (v15 & 1) != 0 );
              v27 = v25 - i;
              v23[9] = v27;
              if ( v27 > 8 )
                i = v26 - 7;
              v23[6] = i;
              v28 = 8;
              if ( v27 > 8 )
                v29 = 0;
              else
                v29 = 8 - v27;
              v23[3] = v29;
              v30 = *(_DWORD **)(*(_QWORD *)this + 112LL);
              for ( j = 0; (v17 & 1) == 0; ++j )
                v17 >>= 1;
              v32 = j;
              do
              {
                v33 = v32;
                v17 >>= 1;
                ++v32;
              }
              while ( (v17 & 1) != 0 );
              v34 = v32 - j;
              v30[10] = v34;
              if ( v34 > 8 )
                j = v33 - 7;
              v30[7] = j;
              v35 = 16;
              if ( v34 <= 8 )
                v28 = 16 - v34;
              v30[4] = v28;
              v36 = *(_DWORD **)(*(_QWORD *)this + 112LL);
              for ( k = 0; (v16 & 1) == 0; ++k )
                v16 >>= 1;
              v38 = k;
              do
              {
                v39 = v38;
                v16 >>= 1;
                ++v38;
              }
              while ( (v16 & 1) != 0 );
              v40 = v38 - k;
              v36[11] = v40;
              if ( v40 > 8 )
                k = v39 - 7;
              v36[8] = k;
              if ( v40 <= 8 )
                v35 = 24 - v40;
              v36[5] = v35;
            }
          }
          else
          {
            v52 = *(_DWORD **)(*(_QWORD *)this + 112LL);
            v53 = a4;
            if ( a4 )
            {
              for ( m = 0; ; ++m )
              {
                v60[2] = m;
                if ( m >= v70 )
                  break;
                v56 = *v53++;
                *v52++ = v56;
                v65[2] = v52;
              }
              v41 = 4;
              v42 = a9;
LABEL_44:
              v43 = *(_QWORD *)this;
              if ( *(_DWORD *)(*(_QWORD *)this + 28LL) )
              {
                v46 = 2;
                v41 = 1;
LABEL_49:
                *(_DWORD *)(v43 + 100) = v41;
                *(_DWORD *)(*(_QWORD *)this + 96LL) = v46;
                HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v66);
                v47 = *(_QWORD *)this;
                if ( !v67 )
                {
                  v48 = 11;
                  if ( !v42 )
                    v48 = 3;
                  inserted = HmgInsertObjectInternal(*(struct OBJECT **)this, v48, 8u);
                  if ( inserted )
                    v67 = v47;
                }
                HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v66);
                if ( inserted )
                  return 1LL;
                goto LABEL_125;
              }
              v44 = *(_DWORD *)(v43 + 24);
              if ( (v44 & 2) == 0 )
              {
                if ( (v44 & 8) != 0 )
                  v41 = 6;
                else
                  v41 = 8 - ((v44 & 0x10) != 0);
                goto LABEL_48;
              }
              v45 = *(_DWORD **)(v43 + 112);
              if ( v45[2] == 31 )
              {
                if ( v45[1] == 2016 && *v45 == 63488 )
                {
                  v41 = 3;
                  goto LABEL_48;
                }
                if ( v45[1] == 992 && *v45 == 31744 )
                  goto LABEL_48;
              }
              v41 = 5;
LABEL_48:
              v46 = v41;
              goto LABEL_49;
            }
            for ( n = 0; n < v70; ++n )
              *v52++ = 0;
          }
          v41 = 4;
          v42 = a9;
          goto LABEL_44;
        }
      }
      else if ( v21 == 2 )
      {
        v61 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6C706147u, &v61) )
        {
          v65[0] = &v62;
          v65[1] = v60;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    v20,
                    v65,
                    &v63);
          inserted = 0LL;
          goto LABEL_14;
        }
        v69 = 0;
        if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
        {
          v69 = 1;
          v13 += 16LL;
          v63 = v13;
        }
        Pool2 = ExAllocatePool2(260LL, v13, v58);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v69 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v20,
                                    Pool2,
                                    v61,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              inserted = 0LL;
              goto LABEL_14;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v20,
                                       Pool2,
                                       v61,
                                       BackTrace) )
          {
            inserted = 0LL;
            goto LABEL_14;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v20 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      inserted = 0LL;
    }
    Pool2 = 0LL;
    goto LABEL_14;
  }
  v13 = 4 * a3 + 4;
  v59 = a8 & 0x3102F00;
  if ( a3 )
  {
    inserted = 0LL;
    goto LABEL_75;
  }
  return 0LL;
}
