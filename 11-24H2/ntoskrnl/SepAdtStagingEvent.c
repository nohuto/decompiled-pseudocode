/*
 * XREFs of SepAdtStagingEvent @ 0x1408F1920
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x1408F0F70 (SeAuditHandleCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404AC0F8 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     RtlCompareUnicodeStrings @ 0x140888920 (RtlCompareUnicodeStrings.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1408F0680 (ObNormalizeHandleValue.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        unsigned __int64 *a3,
        PCWCH *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // r12
  __int64 v15; // rbx
  void *v16; // rsi
  void *v17; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  signed int AllocatedFullProcessImageName; // edi
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // r9d
  int v27; // r15d
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  size_t v34; // r15
  unsigned int v35; // r13d
  char *Pool2; // rax
  char *v37; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v42; // [rsp+3Ah] [rbp-CEh]
  size_t Size; // [rsp+3Ch] [rbp-CCh] BYREF
  void *Src; // [rsp+48h] [rbp-C0h] BYREF
  void *v45; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 *v47; // [rsp+60h] [rbp-A8h]
  _DWORD v48[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-98h]
  __int16 v50; // [rsp+78h] [rbp-90h]
  __int16 v51; // [rsp+7Ah] [rbp-8Eh]
  int v52; // [rsp+80h] [rbp-88h]
  _DWORD v53[5]; // [rsp+84h] [rbp-84h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  int v55; // [rsp+A0h] [rbp-68h]
  int v56; // [rsp+A4h] [rbp-64h]
  const int *v57; // [rsp+B8h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C4h] [rbp-44h]
  __int64 v60; // [rsp+C8h] [rbp-40h]
  int v61; // [rsp+E0h] [rbp-28h]
  int v62; // [rsp+E4h] [rbp-24h]
  const int *v63; // [rsp+F8h] [rbp-10h]
  int v64; // [rsp+100h] [rbp-8h]
  int v65; // [rsp+104h] [rbp-4h]
  PCWCH *v66; // [rsp+118h] [rbp+10h]
  int v67; // [rsp+120h] [rbp+18h]
  int v68; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 *v69; // [rsp+138h] [rbp+30h]
  int v70; // [rsp+140h] [rbp+38h]
  int v71; // [rsp+144h] [rbp+3Ch]
  unsigned __int64 v72; // [rsp+148h] [rbp+40h]
  int v73; // [rsp+160h] [rbp+58h]
  int v74; // [rsp+164h] [rbp+5Ch]
  __int64 v75; // [rsp+168h] [rbp+60h]
  int v76; // [rsp+180h] [rbp+78h]
  int v77; // [rsp+184h] [rbp+7Ch]
  PVOID v78; // [rsp+198h] [rbp+90h]

  v47 = a3;
  v42 = a1;
  memset_0(v48, 0, 0x418uLL);
  v14 = *(_QWORD *)(a12 + 72);
  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Size = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v45 = 0LL;
  v41 = 0;
  if ( !v14
    || !*(_BYTE *)(v14 + 216)
    || a1 != 117
    && a1 != 129
    && RtlCompareUnicodeStrings(a4[1], (unsigned __int64)*(unsigned __int16 *)a4 >> 1, L"File", 4uLL, 0) )
  {
    return 1;
  }
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)CurrentThreadProcess,
                                    (__int64 *)&P,
                                    v20,
                                    v21);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
    {
      v15 = *(_QWORD *)(a6 + 24);
      v23 = *(__int64 **)(a6 + 152);
    }
    else
    {
      v23 = *(__int64 **)(a7 + 152);
    }
    v24 = *v23;
    v25 = *(_QWORD *)(a7 + 24);
    v48[0] = 3;
    v48[1] = 4818;
    v50 = 130;
    v26 = 16;
    v27 = 8;
    if ( (a8 & 0x2000000) != 0 || (v51 = 8, !a10) )
      v51 = 16;
    v52 = 4;
    v28 = *(unsigned __int8 *)(v24 + 1);
    v54 = v24;
    v55 = 1;
    v57 = &SeSubsystemName;
    v58 = 5;
    v53[0] = 4 * v28 + 8;
    v56 = 32;
    v59 = 8;
    v60 = v15;
    if ( !a6 )
      v60 = v25;
    v61 = 1;
    v62 = 32;
    v63 = &SeSubsystemName;
    v49 = 4;
    if ( a4 )
    {
      v29 = *(unsigned __int16 *)a4 + 16;
      v64 = 1;
      v65 = v29;
      v66 = a4;
      if ( a5 )
      {
        if ( v42 == 117 || (v67 = 1, v42 == 129) )
          v67 = 2;
        v30 = *a5;
        v69 = a5;
        v68 = v30 + 16;
      }
      v70 = 11;
      v71 = 8;
      if ( v47 )
        v72 = ObNormalizeHandleValue(*v47);
      else
        v72 = 0LL;
      v75 = a11;
      v73 = 11;
      v74 = 8;
      v76 = 2;
      v31 = v26 + *(unsigned __int16 *)P;
      v78 = P;
      v77 = v31;
      v49 = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v14 + 56),
                                        &Src,
                                        (ULONG *)&Size + 1,
                                        &v41);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v16 = Src;
      }
      else
      {
        v32 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v14 + 64), &v45, (ULONG *)&Size, (_BYTE *)&v41 + 1);
        v17 = v45;
        AllocatedFullProcessImageName = v32;
        v16 = Src;
        if ( v32 >= 0 )
        {
          if ( !Src && !v45 )
            v27 = 0;
          v33 = Size - v27;
          v34 = HIDWORD(Size);
          v35 = v33 + HIDWORD(Size) + 152;
          Pool2 = (char *)ExAllocatePool2(0x100uLL);
          v37 = Pool2;
          if ( Pool2 )
          {
            memset_0(Pool2, 0, v35);
            *((_DWORD *)v37 + 34) = a10;
            if ( !a10 )
              a9 = a8;
            *((_DWORD *)v37 + 33) = 4;
            *(_DWORD *)v37 = a9 & 0xFDFFFFFF;
            *(_OWORD *)(v37 + 4) = *(_OWORD *)(v14 + 88);
            *(_OWORD *)(v37 + 20) = *(_OWORD *)(v14 + 104);
            *(_OWORD *)(v37 + 36) = *(_OWORD *)(v14 + 120);
            *(_OWORD *)(v37 + 52) = *(_OWORD *)(v14 + 136);
            *(_OWORD *)(v37 + 68) = *(_OWORD *)(v14 + 152);
            *(_OWORD *)(v37 + 84) = *(_OWORD *)(v14 + 168);
            *(_OWORD *)(v37 + 100) = *(_OWORD *)(v14 + 184);
            *(_OWORD *)(v37 + 116) = *(_OWORD *)(v14 + 200);
            if ( v16 )
              memmove(v37 + 144, v16, v34);
            if ( v17 )
              memmove(&v37[v34 + 144], v17, (unsigned int)Size);
            v53[8 * v49 - 1] = 29;
            v53[8 * v49] = v35;
            *(&v54 + 4 * v49++) = (__int64)v37;
            v53[8 * v49 - 1] = 30;
            v53[8 * v49] = v35;
            v39 = 0LL;
            *(&v54 + 4 * v49) = (__int64)v37;
            do
            {
              v40 = v39 + 4LL * v49;
              ++v39;
              *(_QWORD *)&v53[2 * v40 + 1] = 0LL;
            }
            while ( v39 < 2 );
            ++v49;
            SepAdtLogAuditRecord(v48);
            ExFreePoolWithTag(v37, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v41 && v16 )
    ExFreePoolWithTag(v16, 0);
  if ( HIBYTE(v41) && v17 )
    ExFreePoolWithTag(v17, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
