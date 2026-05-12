/*
 * XREFs of RaidAdapterTargetedRescan @ 0x140064D84
 * Callers:
 *     RaidAdapterRescanBus @ 0x140017248 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x140018080 (RaidBusEnumeratorGetLunList.c)
 *     McTemplateK0zqquuuqpp_EtwWriteTransfer @ 0x1400587E4 (McTemplateK0zqquuuqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // rbp
  _DWORD *v5; // r14
  int *v6; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  ULONG v10; // r13d
  struct _RTL_BITMAP *v12; // rcx
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebp
  __int64 i; // rsi
  unsigned int v18; // [rsp+60h] [rbp-158h]
  _QWORD v20[32]; // [rsp+70h] [rbp-148h] BYREF

  v4 = *(_QWORD *)(a1 + 4840);
  v5 = (_DWORD *)(a1 + 4832);
  v6 = (int *)(a1 + 4828);
  v7 = 0;
  v8 = 0;
  v10 = *(unsigned __int8 *)(v4 + 8);
  LOBYTE(v18) = *(_BYTE *)(v4 + 8);
  if ( Microsoft_Windows_StorPortEnableBits < 0 )
    McTemplateK0zqquuuqpp_EtwWriteTransfer(
      a1,
      a2,
      (__int64)a3,
      *(const wchar_t **)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *v6,
      v10,
      *(_BYTE *)(v4 + 9),
      *(_BYTE *)(v4 + 10),
      *v5,
      *(_QWORD *)(a1 + 4848),
      *(_QWORD *)(a1 + 4856));
  if ( (*v6 & 4) != 0 )
  {
    v7 = *(unsigned __int8 *)(a1 + 481);
    if ( *(_QWORD *)(a1 + 4880) )
    {
      v12 = (struct _RTL_BITMAP *)(a1 + 4864);
      if ( (*v5 & 1) != 0 )
        RtlSetBit(v12, v10);
      else
        RtlClearBit(v12, v10);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v14 = *v6;
  if ( (*v6 & 2) != 0 )
  {
    v15 = *(unsigned __int8 *)(v4 + 9);
    v7 = v15 + 1;
  }
  else
  {
    v15 = 0;
    if ( (v14 & 1) != 0 )
    {
      *(_WORD *)((char *)&v18 + 1) = *(_WORD *)(v4 + 9);
      HIBYTE(v18) = 0;
      return RaidBusEnumeratorVisitUnit(a3, v18);
    }
  }
  v16 = *(unsigned __int8 *)(a1 + 530);
  memset_0(v20, 1, 0xFFuLL);
  while ( v15 < v7 )
  {
    HIBYTE(v18) = 0;
    BYTE1(v18) = v15;
    result = RaidBusEnumeratorGetLunList(a3, (unsigned __int16)v18, v20);
    v8 = result;
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)v20 + i) )
      {
        BYTE2(v18) = i;
        result = RaidBusEnumeratorVisitUnit(a3, v18);
        v8 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    ++v15;
  }
  return v8;
}
