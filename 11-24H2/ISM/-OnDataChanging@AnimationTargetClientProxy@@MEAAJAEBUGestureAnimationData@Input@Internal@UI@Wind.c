/*
 * XREFs of ?OnDataChanging@AnimationTargetClientProxy@@MEAAJAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180146120
 * Callers:
 *     <none>
 * Callees:
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180146150 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 */

__int64 __fastcall AnimationTargetClientProxy::OnDataChanging(
        AnimationTargetClientProxy *this,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a2)
{
  AnimationTargetClientProxy::SetData(this, a2);
  return 0LL;
}
