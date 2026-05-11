/*
 * XREFs of USBType1Create1MsecBuffers @ 0x14003D374
 * Callers:
 *     USBType1RenderCreatePin @ 0x14003D140 (USBType1RenderCreatePin.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1Create1MsecBuffers(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rsi
  int v9; // edi
  unsigned __int64 v10; // r14
  char *v11; // r13
  __int64 v12; // rsi
  _QWORD *v13; // r15
  unsigned int v14; // r12d
  PIRP Irp; // rax
  _QWORD *v16; // rax
  char *v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]
  __int64 v21; // [rsp+78h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v20 = v1;
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_QWORD *)(v1 + 144);
  v21 = v3;
  v5 = *(_DWORD *)(v4 + 220) & 0x3FF;
  v6 = 0x1000uLL / (v5 + 7);
  if ( (_DWORD)v6 )
    v7 = 0xC / (unsigned int)v6 + (0xC % (unsigned int)v6 != 0);
  else
    v7 = 12;
  v8 = v7 << 12;
  v9 = USBHwAllocateAndBag((PVOID *)&v19, (v8 + 6147) & 0xFFFFF000, 64LL, *(void **)(a1 + 8));
  if ( v9 >= 0 )
  {
    v10 = (unsigned __int64)v19;
    v11 = &v19[v8];
    v12 = v3 + 200;
    v13 = (_QWORD *)(v3 + 152);
    v14 = 0;
    v13[1] = v13;
    *v13 = v13;
    while ( v9 >= 0 )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 40LL) + 76LL), 0);
      *(_QWORD *)(v12 + 16) = Irp;
      if ( Irp )
      {
        v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v12 + 48) = v10;
          *(_QWORD *)(v12 + 40) = a1;
          v10 = (v5 + v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v12 + 24) = v11;
          if ( ((v10 ^ (v10 + v5)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v16 = (_QWORD *)v13[1];
          v11 = (char *)((unsigned __int64)(v11 + 171) & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (_QWORD *)*v16 != v13 )
            __fastfail(3u);
          *(_QWORD *)v12 = v13;
          *(_QWORD *)(v12 + 8) = v16;
          *v16 = v12;
          v13[1] = v12;
        }
        else
        {
          IoFreeIrp(*(PIRP *)(v12 + 16));
        }
      }
      else
      {
        v9 = -1073741670;
      }
      ++v14;
      v12 += 56LL;
      if ( v14 >= 0xC )
      {
        if ( v9 >= 0 )
          KeInitializeSemaphore((PRKSEMAPHORE)(v21 + 168), 12, 12);
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
