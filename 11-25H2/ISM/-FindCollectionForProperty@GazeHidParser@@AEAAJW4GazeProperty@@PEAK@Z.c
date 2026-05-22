/*
 * XREFs of ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x180181FA8
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1801826A0 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::FindCollectionForProperty(__int64 a1, int a2, ULONG *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int16 v9; // bx
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  NTSTATUS LinkCollectionNodes; // eax
  ULONG v16; // ecx
  struct std::nothrow_t *v17; // rdx
  bool v18; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  ULONG LinkCollectionNodesLength; // [rsp+58h] [rbp+28h] BYREF
  struct std::nothrow_t *v21; // [rsp+60h] [rbp+30h]

  v21 = 0LL;
  *a3 = 0;
  v5 = a2 - 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return 0LL;
          v9 = 40;
        }
        else
        {
          v9 = 39;
        }
      }
      else
      {
        v9 = 38;
      }
    }
    else
    {
      v9 = 37;
    }
  }
  else
  {
    v9 = 36;
  }
  v10 = *(unsigned __int16 *)(a1 + 44);
  LinkCollectionNodesLength = v10;
  if ( (_WORD)v10 )
  {
    v21 = (struct std::nothrow_t *)operator new[](saturated_mul(v10, 0x18uLL));
    LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                            (PHIDP_LINK_COLLECTION_NODE)v21,
                            &LinkCollectionNodesLength,
                            *(PHIDP_PREPARSED_DATA *)(a1 + 64));
    if ( LinkCollectionNodes < 0 )
    {
      v11 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x64,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
              (const char *)(unsigned int)LinkCollectionNodes);
      goto LABEL_14;
    }
    v16 = 0;
    v17 = v21;
    while ( 1 )
    {
      v18 = v16 == LinkCollectionNodesLength;
      if ( v16 >= LinkCollectionNodesLength )
        break;
      if ( *((_WORD *)v21 + 12 * v16 + 1) == 18 && *((_WORD *)v21 + 12 * v16) == v9 )
      {
        *a3 = v16;
        v18 = v16 == LinkCollectionNodesLength;
        break;
      }
      ++v16;
    }
    if ( v18 )
    {
      v11 = -2147467259;
      v12 = 113LL;
      goto LABEL_13;
    }
    if ( v17 )
      operator delete(v17, v17);
    return 0LL;
  }
  v11 = -2089418750;
  v12 = 91LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)v11);
LABEL_14:
  if ( v21 )
    operator delete(v21, v13);
  return v11;
}
