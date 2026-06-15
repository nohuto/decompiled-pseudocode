/*
 * XREFs of ??1_Node_if@std@@UEAA@XZ @ 0x18013BA1C
 * Callers:
 *     ??_E_Node_if@std@@UEAAPEAXI@Z @ 0x18013BCE0 (--_E_Node_if@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18013F65C (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 */

void __fastcall std::_Node_if::~_Node_if(std::_Node_if *this)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax
  struct std::_Node_base *v4; // rcx

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &std::_Node_if::`vftable';
  while ( v1 )
  {
    v3 = (_QWORD *)(v1 + 40);
    v4 = (struct std::_Node_base *)v1;
    v1 = *(_QWORD *)(v1 + 40);
    *v3 = 0LL;
    std::_Destroy_node(v4, *((struct std::_Node_base **)this + 4));
  }
  *(_QWORD *)this = &std::_Node_endif::`vftable';
}
