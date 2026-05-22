/*
 * XREFs of _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x18002C358
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002BD80 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x18002C544 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x18002C59C (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x18002CA90 (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(__int64 *a1)
{
  __int64 v1; // r13
  const struct KeyboardProcessor::TargetingInfo *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rbp
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // di
  const struct KeyboardProcessor::TargetingInfo *i; // r15
  const struct KeyboardProcessor::TargetingInfo *v12; // rbx
  KeyboardProcessor::TargetingInfo *v13; // rdi
  KeyboardProcessor::TargetingInfo *j; // rbx
  KeyboardProcessor::TargetingInfo *v15; // rax
  __int16 v16; // si
  __int16 v17; // di
  _BYTE v18[60]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int16 v19; // [rsp+5Ch] [rbp-16Ch]
  __int64 v20; // [rsp+190h] [rbp-38h]
  __int64 v21; // [rsp+198h] [rbp-30h]

  v1 = a1[1];
  v2 = *(const struct KeyboardProcessor::TargetingInfo **)(v1 + 72);
  v3 = *a1;
  v4 = *(_QWORD *)(v1 + 64);
  if ( (const struct KeyboardProcessor::TargetingInfo *)v4 != v2 )
  {
    do
    {
      v5 = (_OWORD *)v4;
      v6 = v18;
      v7 = 2LL;
      do
      {
        *v6 = *v5;
        v6[1] = v5[1];
        v6[2] = v5[2];
        v6[3] = v5[3];
        v6[4] = v5[4];
        v6[5] = v5[5];
        v6[6] = v5[6];
        v6 += 8;
        *(v6 - 1) = v5[7];
        v5 += 8;
        --v7;
      }
      while ( v7 );
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v8 = *(_QWORD *)(v4 + 368);
      v20 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = *(_QWORD *)(v4 + 376);
      v21 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = *(_WORD *)(v3 + 60) == v19;
      KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)v18);
      if ( v10 )
        break;
      v4 += 384LL;
    }
    while ( (const struct KeyboardProcessor::TargetingInfo *)v4 != v2 );
    if ( (const struct KeyboardProcessor::TargetingInfo *)v4 != v2 )
    {
      for ( i = (const struct KeyboardProcessor::TargetingInfo *)(v4 + 384);
            i != v2;
            i = (const struct KeyboardProcessor::TargetingInfo *)((char *)i + 384) )
      {
        v15 = (KeyboardProcessor::TargetingInfo *)KeyboardProcessor::TargetingInfo::TargetingInfo(
                                                    (KeyboardProcessor::TargetingInfo *)v18,
                                                    i);
        v16 = *(_WORD *)(v3 + 60);
        v17 = *((_WORD *)v15 + 30);
        KeyboardProcessor::TargetingInfo::~TargetingInfo(v15);
        if ( v16 != v17 )
        {
          KeyboardProcessor::TargetingInfo::operator=(v4, i);
          v4 += 384LL;
        }
      }
      if ( (const struct KeyboardProcessor::TargetingInfo *)v4 != v2 )
      {
        v12 = *(const struct KeyboardProcessor::TargetingInfo **)(v1 + 72);
        while ( v2 != v12 )
        {
          KeyboardProcessor::TargetingInfo::operator=(v4, v2);
          v4 += 384LL;
          v2 = (const struct KeyboardProcessor::TargetingInfo *)((char *)v2 + 384);
        }
        v13 = *(KeyboardProcessor::TargetingInfo **)(v1 + 72);
        for ( j = (KeyboardProcessor::TargetingInfo *)v4;
              j != v13;
              j = (KeyboardProcessor::TargetingInfo *)((char *)j + 384) )
        {
          KeyboardProcessor::TargetingInfo::~TargetingInfo(j);
        }
        *(_QWORD *)(v1 + 72) = v4;
      }
    }
  }
}
