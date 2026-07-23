/*
 * XREFs of GetPrintableAttributeName @ 0x140866540
 * Callers:
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EncodeAttributeName @ 0x140796F60 (EncodeAttributeName.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r15
  size_t v9; // r13
  unsigned int v10; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // r14
  _WORD *v14; // rdi
  size_t v15; // r8
  const void *v16; // rdx
  const wchar_t *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  LODWORD(v21) = 0;
  v20 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 || (v9 = *(unsigned int *)(a1 + 1), *a5 = 5, a2 - 5 < (unsigned int)v9) )
    {
      v6 = 1336;
      goto LABEL_9;
    }
    if ( a3 == -8 )
    {
      v10 = v9 + 2;
      if ( (int)v9 + 2 < (unsigned int)v9 )
      {
LABEL_8:
        v6 = 534;
LABEL_9:
        SddlpFree(v8);
        return v6;
      }
    }
    else
    {
      v18 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v9, &v20);
      v8 = v20;
      v6 = v18;
      if ( v18 )
        goto LABEL_9;
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)(v20 + 2 * v19) );
      v21 = (unsigned int)(2 * v19);
      v10 = v21 + 2;
      if ( (int)v21 + 2 < (unsigned int)v21 )
        goto LABEL_8;
      switch ( a3 )
      {
        case -5:
          v7 = 8;
          v12 = v21 + 18;
          break;
        case -7:
          v7 = 6;
          v12 = v21 + 14;
          break;
        case -6:
          v7 = 10;
          v12 = v21 + 22;
          break;
        case -4:
          v7 = 7;
          v12 = v21 + 16;
          break;
        default:
          goto LABEL_15;
      }
      if ( v12 < v10 )
        goto LABEL_8;
      v10 = v12;
    }
LABEL_15:
    v13 = v10;
    v14 = (_WORD *)SddlpAlloc(v10);
    *a4 = v14;
    if ( !v14 )
    {
      v6 = 8;
      goto LABEL_9;
    }
    switch ( a3 )
    {
      case -5:
        v17 = L"@DEVICE.";
        break;
      case -7:
        v17 = L"@USER.";
        break;
      case -6:
        v17 = L"@RESOURCE.";
        break;
      case -4:
        v17 = L"@TOKEN.";
        break;
      default:
LABEL_20:
        if ( a3 == -8 )
        {
          v15 = v9;
          v16 = (const void *)(a1 + (unsigned int)*a5);
        }
        else
        {
          v15 = (unsigned int)v21;
          v16 = (const void *)v8;
        }
        memmove(&v14[v7], v16, v15);
        *a5 += v9;
        v14[(v13 >> 1) - 1] = 0;
        goto LABEL_9;
    }
    memmove(v14, v17, v7 * 2);
    goto LABEL_20;
  }
  return 87LL;
}
