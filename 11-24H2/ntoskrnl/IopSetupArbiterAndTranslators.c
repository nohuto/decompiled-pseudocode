/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x140A65728
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140A65214 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopTranslateAndAdjustReqDesc @ 0x14071F9BC (IopTranslateAndAdjustReqDesc.c)
 *     IopQueryResourceHandlerInterface @ 0x140A659A4 (IopQueryResourceHandlerInterface.c)
 *     IopFindResourceHandlerInfo @ 0x140A7DE64 (IopFindResourceHandlerInfo.c)
 *     IopCallArbiter @ 0x140A89AB8 (IopCallArbiter.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A904E8 (IopFindLegacyBusDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rcx
  char v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  char v9; // si
  unsigned int v10; // eax
  char v11; // r13
  _QWORD *v12; // rbx
  __int64 v13; // r14
  __int64 *v14; // rdx
  __int64 v15; // rdi
  unsigned __int16 v16; // r14
  __int64 i; // rax
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 result; // rax
  char v22; // al
  __int16 v23; // di
  __int64 *v24; // rcx
  __int64 LegacyBusDeviceNode; // rax
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdi
  __int64 Pool2; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  PVOID *v33; // rcx
  __int64 v34; // rdi
  int v35; // eax
  char v36; // r9
  __int64 v37; // [rsp+20h] [rbp-38h]
  __int64 v38; // [rsp+28h] [rbp-30h]
  __int64 v39; // [rsp+30h] [rbp-28h] BYREF
  __int64 v40[4]; // [rsp+38h] [rbp-20h] BYREF
  char v41; // [rsp+A0h] [rbp+48h]
  char v42; // [rsp+A8h] [rbp+50h]
  __int64 v43; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+60h]

  v3 = 0LL;
  v42 = 1;
  v39 = 0LL;
  v5 = *((_QWORD *)a1 + 9);
  v6 = 0;
  v44 = v5;
  LOBYTE(a3) = 0;
  v40[0] = 0LL;
  v7 = *((_QWORD *)a1 + 4);
  v41 = 0;
  v43 = 0LL;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(v7 + 64) + 1LL);
  v8 = (_BYTE)v7 == 7;
  v9 = v7;
  v10 = a1[20];
  if ( v8 )
    v9 = 3;
  if ( v10 != 1 || (v11 = 1, *a1) )
    v11 = 0;
  if ( !v5 || v10 == 1 )
    v12 = IopRootDeviceNode;
  else
    v12 = *(_QWORD **)(*(_QWORD *)(v5 + 312) + 40LL);
  while ( v12 )
  {
    if ( v12 != IopRootDeviceNode || (_BYTE)a3 || v11 )
    {
      if ( !v6 )
      {
        v13 = v12[4];
        if ( v13 != v5 )
        {
          LOBYTE(a3) = v9;
          v22 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64 *, __int64, __int64))IopFindResourceHandlerInfo)(
                  2LL,
                  v12,
                  a3,
                  &v39,
                  v37,
                  v38);
          v3 = 0LL;
          if ( v22 )
            goto LABEL_61;
          if ( (unsigned __int8)v9 > 0xFu )
            v23 = 0;
          else
            v23 = 1 << v9;
          v27 = IopQueryResourceHandlerInterface(2LL, v13, a3, &v43);
          *((_WORD *)v12 + 263) |= v23;
          v3 = 0LL;
          if ( v27 >= 0 )
          {
            v28 = v43;
LABEL_58:
            Pool2 = ExAllocatePool2(0x100uLL, 0x70uLL, 0x20207050u);
            v3 = 0LL;
            v30 = Pool2;
            if ( !Pool2 )
              return 3221225626LL;
            *(_WORD *)(Pool2 + 104) = 0;
            *(_QWORD *)(Pool2 + 96) = Pool2 + 88;
            *(_QWORD *)(Pool2 + 88) = Pool2 + 88;
            *(_QWORD *)(Pool2 + 80) = Pool2 + 72;
            *(_QWORD *)(Pool2 + 72) = Pool2 + 72;
            v31 = (_QWORD *)(Pool2 + 40);
            *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
            v32 = (_QWORD *)(Pool2 + 56);
            *v31 = v31;
            v32[1] = v32;
            *v32 = v32;
            *(_QWORD *)(v30 + 8) = v30;
            *(_QWORD *)v30 = v30;
            *(_BYTE *)(v30 + 16) = v9;
            *(_QWORD *)(v30 + 32) = v12;
            v33 = (PVOID *)v12[62];
            if ( *v33 != v12 + 61 )
LABEL_74:
              __fastfail(3u);
            *(_QWORD *)v30 = v12 + 61;
            *(_QWORD *)(v30 + 8) = v33;
            *v33 = (PVOID)v30;
            v12[62] = v30;
            *(_QWORD *)(v30 + 24) = v28;
            v34 = v30 & -(__int64)(v28 != 0);
            v39 = v34;
          }
          else
          {
            *((_WORD *)v12 + 262) |= v23;
            if ( (unsigned __int8)v9 > 0xFu )
            {
              v28 = 0LL;
              v43 = 0LL;
              goto LABEL_58;
            }
LABEL_61:
            v34 = v39;
          }
          if ( v34 )
          {
            v6 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v34 + 24) + 40LL) & 1) != 0
              && (v35 = IopCallArbiter(v34, 7LL), v3 = 0LL, v35 < 0) )
            {
              v6 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v34;
              *(_WORD *)(v34 + 104) = 0;
            }
          }
        }
      }
      if ( v42 != (_BYTE)v3 )
      {
        v14 = v12 + 63;
        v15 = v3;
        v16 = 1 << v9;
        if ( ((unsigned __int16)(1 << v9) & (_WORD)v12[65]) != 0 )
          goto LABEL_22;
        if ( (v16 & *((_WORD *)v12 + 261)) != 0 || (unsigned __int8)v9 > 0xFu )
        {
          for ( i = *v14; (__int64 *)i != v14; i = *(_QWORD *)i )
          {
            if ( *(_BYTE *)(i + 16) == v9 )
            {
              if ( (unsigned __int8)v9 <= 0xFu || *(_QWORD *)(i + 24) != v3 )
                v15 = i;
              if ( v15 )
LABEL_21:
                v41 = 1;
              goto LABEL_22;
            }
          }
          if ( (unsigned __int8)v9 > 0xFu )
            v16 = v3;
        }
        LOBYTE(a3) = v9;
        v18 = IopQueryResourceHandlerInterface(1LL, v12[4], a3, &v43);
        *((_WORD *)v12 + 261) |= v16;
        v3 = 0LL;
        if ( v18 < 0 )
        {
          *((_WORD *)v12 + 260) |= v16;
          if ( (unsigned __int8)v9 <= 0xFu )
            goto LABEL_22;
          v19 = 0LL;
          v43 = 0LL;
        }
        else
        {
          v19 = v43;
        }
        v20 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x20207050u);
        v3 = 0LL;
        v15 = v20;
        if ( !v20 )
          return 3221225626LL;
        *(_BYTE *)(v20 + 16) = v9;
        *(_QWORD *)(v20 + 8) = v20;
        *(_QWORD *)v20 = v20;
        *(_QWORD *)(v20 + 24) = v19;
        *(_QWORD *)(v20 + 32) = v12;
        v24 = (__int64 *)v12[64];
        if ( (_QWORD *)*v24 != v12 + 63 )
          goto LABEL_74;
        *(_QWORD *)v20 = v12 + 63;
        *(_QWORD *)(v20 + 8) = v24;
        *v24 = v20;
        v12[64] = v20;
        if ( v19 )
          goto LABEL_21;
        v15 = 0LL;
LABEL_22:
        if ( !v6 && v15 )
        {
          result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v15, v40);
          v3 = 0LL;
          if ( (int)result < 0 )
            return result;
          a3 = v40[0];
          v36 = v42;
          v8 = *(_BYTE *)(*(_QWORD *)(v40[0] + 64) + 1LL) == 7;
          v9 = *(_BYTE *)(*(_QWORD *)(v40[0] + 64) + 1LL);
          *(_QWORD *)(v40[0] + 32) = *((_QWORD *)a1 + 4);
          *((_QWORD *)a1 + 4) = a3;
          if ( v8 )
            v9 = 3;
          if ( (_DWORD)result == 288 )
            v36 = 0;
          v42 = v36;
        }
      }
      v12 = (_QWORD *)v12[2];
LABEL_24:
      v5 = v44;
      LOBYTE(a3) = v41;
    }
    else
    {
      v11 = 1;
      LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(*a1, a1[1]);
      v5 = v44;
      v12 = (_QWORD *)LegacyBusDeviceNode;
      LOBYTE(a3) = v41;
      if ( LegacyBusDeviceNode == v26 )
      {
        v5 = v44;
        if ( **(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) == (_DWORD)v3 )
        {
          v12 = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
          goto LABEL_24;
        }
      }
    }
  }
  return v6 == 0 ? 0xC000008A : 0;
}
